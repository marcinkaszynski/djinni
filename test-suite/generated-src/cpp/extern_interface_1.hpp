// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from yaml-test.djinni

#pragma once

#include "client_interface.hpp"
#include "client_returned_record.hpp"
#include <memory>

class ExternInterface1 {
public:
    virtual ~ExternInterface1() {}

    virtual ::ClientReturnedRecord foo(const std::shared_ptr<::ClientInterface> & i) = 0;
};
