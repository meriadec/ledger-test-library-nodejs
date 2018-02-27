// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from view_model.djinni

#pragma once

#include "stl.hpp"
#include <cstdint>

namespace ledgerapp_gen {

struct TransactionListVmCell;

class TransactionListVm {
public:
    virtual ~TransactionListVm() {}

    /**
     *get transactions
     * the total number of results in this list
     */
    virtual int32_t count() = 0;

    /** get the data for an individual user */
    virtual std::experimental::optional<TransactionListVmCell> getTransaction(int32_t index) = 0;
};

}  // namespace ledgerapp_gen
