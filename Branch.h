//
// Created by emrem on 30.03.2023.
//

#ifndef CS201_HW1_BRANCH_H
#define CS201_HW1_BRANCH_H

#include <string>
using namespace std;


class Branch {
private:
    int id;
    string name;
public:
    Branch(int id, string name);
    Branch();
    string getName();
    int getId();
};


#endif //CS201_HW1_BRANCH_H
