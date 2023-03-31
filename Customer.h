//
// Created by emrem on 30.03.2023.
//

#ifndef CS201_HW1_CUSTOMER_H
#define CS201_HW1_CUSTOMER_H

#include <string>

using namespace std;

class Customer {
public:
    Customer();
    Customer(int customerId, string customerName);
    int getId();
    string getName();
private:
    int customerId;
    string customerName;
};


#endif //CS201_HW1_CUSTOMER_H
