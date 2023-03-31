#include <iostream>

#include "BankingSystem.h"

int main() {
    BankingSystem B ;
    B . addBranch ( 1451 , " Bilkent " ) ;
    B . addBranch ( 2435 , " Kizilay " ) ;
    B . addBranch ( 1672 , " Bahcelievler " ) ;
    B . addBranch ( 3216 , " Ulus " ) ;
    B . addBranch ( 2435 , " Kizilay " ) ;
    B . deleteBranch ( 1672 ) ;
    B . deleteBranch ( 1451 ) ;
    B . deleteBranch ( 1723 ) ;
    B . addBranch ( 9876 , " Umitkoy " ) ;

    cout << endl;

    B . addCustomer ( 1234 , "Ali Ak" ) ;
    B . addCustomer ( 4567 , " Aynur Dayanik " ) ;
    B . addCustomer ( 891234 , " Cihan Erkan " ) ;
    B . addCustomer ( 891234 , " Hakan Karaca " ) ;
    B . addCustomer ( 5678 , " Mustafa Gundogan " ) ;
    B . addCustomer ( 8901 , "Can Kara " ) ;
    B . deleteCustomer ( 5678 ) ;
    B . deleteCustomer ( 1267 ) ;

    return 0;
}
