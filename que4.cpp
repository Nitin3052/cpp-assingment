#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;
    double grossSalary;

public:
void setEmpID(int id){
        empID = id;
    }

     void setEmpName(string name){
        empName = name;
    }

    void setEmpSalary(double salary){
        empSalary = salary;
    }

    int getEmpID(){
        return empID;
    }

    string getEmpName(){
        return empName;
    }

    double getEmpSalary(){
        return empSalary;
    }

      void calculateGrossSalary(){
        if(empSalary <= 5000){
            grossSalary = empSalary + (empSalary * 0.10);
        }
        else if(empSalary <= 10000){
            grossSalary = empSalary + (empSalary * 0.15);
        }
        else{
            grossSalary = empSalary + (empSalary * 0.20);
        }

        cout << "Gross Salary: " << grossSalary << endl;
    }

     void displayEmployeeDetails(){
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: " << empSalary << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main(){

    Employee emp;
    int choice;
    int id;
    string name;
     double salary;

    do{
        cout << "\n----- Employee Payroll System -----\n";
        cout << "1. Add New Employee\n";
        cout << "2. Calculate Gross Salary\n";
        cout << "3. Display Employee Details\n";
        cout << "4. Update Employee Information\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){

            case 1:
            cout << "Enter Employee ID: ";
            cin >> id;
            emp.setEmpID(id);

            cout << "Enter Employee Name: ";
            cin >> name;
            emp.setEmpName(name);

            cout << "Enter Employee Salary: ";
            cin >> salary;
            emp.setEmpSalary(salary);

            cout << "Employee added successfully!\n";
            break;

        case 2:
            emp.calculateGrossSalary();
            break;
              case 3:
            emp.displayEmployeeDetails();
            break;

        case 4:
            cout << "Enter new name: ";
            cin >> name;
            emp.setEmpName(name);

            cout << "Enter new salary: ";
            cin >> salary;
            emp.setEmpSalary(salary);

            cout << "Employee information updated!\n";
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

                 default:
            cout << "Invalid choice!\n";
        }

    }while(choice != 5);

    return 0;
}