#include <iostream>
using namespace std;

class Employee {
    const int employeeId;
    string name;
    float salary;

public:
   
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s) {
    }

    void display() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1(101, "Rahul", 50000);

    e1.display();

    return 0;
}

// const variables cannot be changed after they are created.
// When an object of a class is created, const data members must be initialized immediately.

// nitializer list is faster because it directly initializes members instead of creating them first and assigning later.