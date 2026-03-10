#include <iostream>
using namespace std;

class Banckaccount{
    private:
    int accountnumber;
    string accountHolderName;
    double balance;

    public:
    void setaccountnumber(int accNo){
        accountnumber = accNo;
    }

    void setaccountHolderName(string name){
        accountHolderName = name;
    }

    void setbalnce(double bal){
        balance = bal;
    }

    int getaccountnumber(){
        return accountnumber;
    }

    string getaccountHolderName(){
        return accountHolderName;
    }

    double getbalance(){
        return balance;
    }

    void deposite(double amount){
        balance = balance + amount;
        cout << "Amount deposited succesfully.\n";
    }

    void withdraw(double amount){
        if(amount <= balance){
            balance = balance -amount;
            cout << "withdrawal successsful.\n";
        }else{
            cout <<"insufficent balance\n";
        }
    }
    void displayAccountdetails(){
        cout << "Account number: "<< accountnumber<<endl;
        cout << "Account Holder Name: "<< accountHolderName<<endl;
        cout << "Balance: "<< balance<<endl;
    }

};

int main(){
    Banckaccount acc;
    int choice;
    double amount;

    acc.setaccountnumber(101);
    acc.setaccountHolderName( "nitin");
    acc.setbalnce(5000);

    do{
        cout << "\n---simple banking systeam---\n";
         cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

          case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc.deposite(amount);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc.withdraw(amount);
            break;

        case 3:
            acc.displayAccountdetails();
            break;

        case 4:
            cout << "Exiting program...\n";   
            break;

        default:
        cout << "invalid choice\n";    
    }

}while(choice !=4);
return 0;
}