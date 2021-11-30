//
// Created by Vincent Tan on 11/24/21.
//

#include "on_connection_dropped.h"
#include "on_internal_error.h"

std::function<void(std::string)>* dappf::data::event_listeners::on_connection_dropped::handle;

void dappf::data::event_listeners::on_connection_dropped::set(std::function<void(std::string)>* _handle) {
    handle = _handle;
}

std::function<void(std::string)> *dappf::data::event_listeners::on_connection_dropped::get() {
    return handle;
}

