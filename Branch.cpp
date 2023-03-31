//
// Created by emrem on 30.03.2023.
//

#include "Branch.h"

Branch::Branch(int id, string name) {
    this->id = id;
    this->name = name;
}

Branch::Branch() {
    id = 0;
    name = " ";
}

string Branch::getName() {
    return name;
}

int Branch::getId() {
    return id;
}