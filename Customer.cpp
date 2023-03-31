//
// Created by emrem on 30.03.2023.
//

#include "Customer.h"

Customer::Customer() {
    customerId = 0;
    customerName = " ";
}

Customer::Customer(int customerId, string customerName) {
    this->customerId = customerId;
    this->customerName = customerName;
}

int Customer::getId() {
    return customerId;
}

string Customer::getName() {
    return customerName;
}