#include <iostream>
using namespace std;

class student{
    private: 
    string name;
    int rollnumber;
    float marks;
    char grade;


public:
    student(){
     name = "";
     rollnumber = 0;
     marks = 0;
     grade ='F';
    }
void accept(){
    cout << "enter name: ";
    cin >> name;

    cout<<"roll number: ";
    cin >>rollnumber;

    cout<<"marks: ";
    cin >> marks;

    cout<<"grade: ";
    cin >> grade;
}

void calculategrade( ){
    if (marks >=90)
    grade = 'A';
    else if(marks >=80)
    grade = 'B';
    else if(marks >=70)
    grade = 'C';
    else if(marks >=60)
    grade = 'D';
    else grade = 'F';

}

void display(){
    cout << "\n----- student Details -----"<<endl;
    cout << "name        : " << name <<endl;
    cout << "Roll Number : " << rollnumber <<endl;
    cout << "Marks       : " << marks <<endl;
    cout << "Grade       : " << grade <<endl;

}
};

int main(){
    student s;
    int choice;

    do{
        cout << "\n==== menu ====" << endl;
        cout << "1. Accept Information" << endl;
        cout << "2. Calculate Grade" << endl;
        cout << "3. Display Information" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            s.accept();
            break;

        case 2:
            s.calculategrade();
            cout << "Grade Calculated Successfully!" << endl;
            break;

        case 3:
            s.display();
            break;

        case 4:
            cout << "Program Exited." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
    
