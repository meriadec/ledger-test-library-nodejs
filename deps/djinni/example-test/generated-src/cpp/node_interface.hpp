// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include <cstdint>
#include <string>

namespace testapp {

class NodeInterface {
public:
    virtual ~NodeInterface() {}

    virtual int32_t getNodeVersion(const std::string & version) = 0;
};

}  // namespace testapp
