// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include <cstdint>
#include <experimental/optional>
#include <string>
#include <utility>

struct ClientReturnedRecord final {
    int64_t record_id;
    std::string content;
    std::experimental::optional<std::string> misc;

    ClientReturnedRecord(int64_t record_id,
                         std::string content,
                         std::experimental::optional<std::string> misc)
    : record_id(std::move(record_id))
    , content(std::move(content))
    , misc(std::move(misc))
    {}
};
