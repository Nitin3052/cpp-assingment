#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int *arr;

    arr = (int*) malloc(5 * sizeof(int));  

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Numbers are: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    free(arr);   

    return 0;
}

// No constructor is defined in the class.
// The object is created without passing parameters.


// the programmer defines any constructor with parameters.

// Yes, constructors can be overloaded by defining multiple constructors with different parameters.