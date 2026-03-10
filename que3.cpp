#include <iostream>
using namespace std;

int main() {
    int x = 10;        
    int *p = &x;      
    int &r = x;       

    cout <<"Original value: "<< x << endl;

    *p = 20;           
    cout <<"After pointer modification: "<< x << endl;

    r = 30;           
    cout <<"After reference modification: "<< x << endl;

    return 0;
}

// pointer is null; referance is not null
// pointer can changed  point to another vaiable;  refererance is not change

// A reference must be initialized when it is created variable
// Pointer stores address and can be NULL, while Reference is an alias and cannot be NULL