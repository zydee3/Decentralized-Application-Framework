//
// Created by Vince on 11/1/2021.
//

#ifndef DAPPF_COMPRESSION_H
#define DAPPF_COMPRESSION_H


#include <cstdint>
#include <vector>
#include "../utility/array.h"

namespace dappf::data {
    class Compression {

    private:
        static const int pos_compressed_flag = 7;

    public:
        static int compress(int8_t*, int);
        static int decompress(int8_t*, int);

    };
}


#endif //DAPPF_COMPRESSION_H