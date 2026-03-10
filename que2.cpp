#include <iostream>
using namespace std;

void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10, y = 20;

    swapByValue(x,y);
    cout << " swapByValue: x=" << x << " y=" << y << endl;

    swapByAddress(&x,&y);
    cout << " swapByAddress: x=" << x << " y=" << y << endl;

    swapByReference(x,y);
    cout << " swapByReference: x=" << x << " y=" << y << endl;

    return 0;
}

//In programming  languages like C++ a reference variable is not a separate copy of data,
// it is simply a new name—an alias—for an existing memory location.