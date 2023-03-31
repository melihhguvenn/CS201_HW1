//
// Created by emrem on 30.03.2023.
//

#ifndef CS201_HW1_BANKINGSYSTEM_H
#define CS201_HW1_BANKINGSYSTEM_H

#include <cstring>
#include "Branch.h"
#include "Customer.h"

using namespace std;

class BankingSystem {
public :
    BankingSystem () ;
    ~ BankingSystem () ;
    void addBranch ( const int branchId , const string branchName ) ;
    void deleteBranch ( const int branchId ) ;
    void addCustomer ( const int customerId , const string customerName ) ;
    void deleteCustomer ( const int customerId ) ;
    int addAccount ( const int branchId , const int customerId , const double
    amount ) ;
    void deleteAccount ( const int accountId ) ;
    void showAllAccounts () ;
    void showBranch ( const int branchId ) ;
    void showCustomer ( const int customerId ) ;
    int customerCount;
    Customer *customers;

private:
    int branchCount;
    Branch *branches;

};

#endif //CS201_HW1_BANKINGSYSTEM_H
