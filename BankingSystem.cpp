//
// Created by emrem on 30.03.2023.
//

#include "BankingSystem.h"
#include <iostream>

BankingSystem::BankingSystem() {
    branchCount = 0;
    customerCount = 0;
}

BankingSystem::~BankingSystem() {

}

void BankingSystem::addBranch(const int branchId, const string branchName) {
    for (int i = 0; i < branchCount; ++i) {
        if (branches[i].getName() == branchName){
            cout << "Branch " << branches[i].getId() << " already exists" << endl;
            return;
        }
    }

    branchCount++;

    if (branchCount == 1){
        branches = new Branch[branchCount];
        branches[branchCount - 1] = Branch(branchId, branchName);

    } else{

        Branch *temp;
        temp = new Branch[branchCount];

        for (int i = 0; i < branchCount - 1; ++i) {
            temp[i] = branches[i];
        }

        delete [] branches;

        branches = temp;

        branches[branchCount - 1] = Branch(branchId, branchName);

        temp = NULL;

    }
    cout << "Branch " << branches[branchCount - 1].getId() << " has been added" << endl;

}

void BankingSystem::deleteBranch(const int branchId) {
    bool branchExists = false;

    for (int i = 0; i < branchCount; ++i) {
        if (branches[i].getId() == branchId){
            branchExists = true;
            break;
        }
    }

    if (branchExists == false){
        cout << "Branch " << branchId << " does not exist" << endl;
    } else{
        if (branchCount == 1){
            delete[] branches;
        } else{
            Branch *temp;
            temp = new Branch[branchCount - 1];
            int j = 0;
            for (int i = 0; i < branchCount; ++i) {
                if (branchId != branches[i].getId()){
                    temp[j] = branches[i];
                    j++;
                }

            }
            delete [] branches;

            branches = temp;

            temp = NULL;
        }

        branchCount--;

        cout << "Branch " << branchId << " has been deleted" << endl;
    }

}

void BankingSystem::addCustomer(const int customerId, const string customerName) {
    for (int i = 0; i < customerCount; ++i) {
        if (customers[i].getId() == customerId){
            cout << "Customer " << customers[i].getId() << " already exists" << endl;
            return;
        }
    }

    customerCount++;

    if (customerCount == 1){
        customers = new Customer[customerCount];
        customers[customerCount - 1] = Customer(customerId, customerName);

    } else{

        Customer *temp;
        temp = new Customer[customerCount];

        for (int i = 0; i < customerCount - 1; ++i) {
            temp[i] = customers[i];
        }

        delete [] customers;

        customers = temp;

        customers[customerCount - 1] = Customer(customerId, customerName);

        temp = NULL;

    }
    cout << "Customer " << customers[customerCount - 1].getId() << " has been added" << endl;
}

void BankingSystem::deleteCustomer(const int customerId) {
    bool customerExists = false;

    for (int i = 0; i < customerCount; ++i) {
        if (customers[i].getId() == customerId){
            customerExists = true;
            break;
        }
    }

    if (customerExists == false){
        cout << "Customer " << customerId << " does not exist" << endl;
    } else{
        if (customerCount == 1){
            delete[] customers;
        } else{
            Customer *temp;
            temp = new Customer[customerCount - 1];
            int j = 0;
            for (int i = 0; i < customerCount; ++i) {
                if (customerId != customers[i].getId()){
                    temp[j] = customers[i];
                    j++;
                }
            }
            delete [] customers;

            customers = temp;

            temp = NULL;
        }

        customerCount--;

        cout << "Customer " << customerId << " has been deleted" << endl;
    }
}

int BankingSystem::addAccount(const int branchId, const int customerId, const double amount) {

}

void BankingSystem::deleteAccount(const int accountId) {

}

void BankingSystem::showAllAccounts() {

}

void BankingSystem::showBranch(const int branchId) {

}

void BankingSystem::showCustomer(const int customerId) {

}