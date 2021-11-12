#include <iostream>
#include <cmath>
#include <signal.h>
#include <unordered_set>
#include "../framework/dappf.h"
#include "../framework/data/Compression.h"
#include "../framework/security/packet_cipher.h"

void interrupt_handler(int s) {
    std::cout << "terminating" << std::endl;
    exit(1);
}

uint16_t strtouint16(char number[]) {
    char *last;
    long num = strtol(number, &last, 10);
    if (num <= 0 || num > UINT16_MAX || *last != '\0') {
        return 0;
    }
    return num;
}

void receive(int8_t *data, int32_t length) {
    // get string
    std::string message((char *) data, length);
    std::cout << message << std::endl;
}

[[noreturn]] int main(int argc, char **argv) {
    dappf::Dappf *dappf_handle;

    if (argc == 2) {
        uint16_t listen_port = strtouint16(argv[1]);

        dappf_handle = new dappf::Dappf(listen_port, receive);
    } else {
        std::string address(argv[1]);
        uint16_t connect_port = strtouint16(argv[2]);
        uint16_t listen_port = strtouint16(argv[3]);

        dappf_handle = new dappf::Dappf(address, connect_port, listen_port, receive);
    }

    // setup the signal handler so that we can quit gracefully
    struct sigaction sigint_handler;

    sigint_handler.sa_handler = interrupt_handler;
    sigemptyset(&sigint_handler.sa_mask);
    sigint_handler.sa_flags = 0;

    sigaction(SIGINT, &sigint_handler, NULL);

    // keep reading in from console and sending through the network
    dappf::meta::packet_writer *packet = new dappf::meta::packet_writer;
    std::string message;
    while (true) {
        std::cin >> message;

        try {
            packet->encode_string(message);
            dappf_handle->broadcast(packet);
            packet->clear();
        } catch (std::runtime_error e) {
            std::cout << e.what() << std::endl;
        } catch (...) {
            std::cout << "An error occurred!" << std::endl;
        }
    }
}
