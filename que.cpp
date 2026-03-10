#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    TollBooth() {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    void vehiclePayingToll(int vehicleType, double tollAmount) {
        totalVehicles++;
        totalRevenue += tollAmount;
    }

    int getTotalVehicles() {
        return totalVehicles;
    }

    double getTotalRevenue() {
        return totalRevenue;
    }

    void resetBooth() {
        totalVehicles = 0;
        totalRevenue = 0;
    }
};

int main() {
    TollBooth booth;
    int choice;

    do {
        cout << "\n---- Toll Booth Menu ----\n";
        cout << "1. Add Car (Rs 180)\n";
        cout << "2. Add Truck (Rs 300)\n";
        cout << "3. Add Bus (Rs 350)\n";
        cout << "4. Display total vehicles\n";
        cout << "5. Display total revenue\n";
        cout << "6. Reset booth statistics\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            booth.vehiclePayingToll(1,180);
            break;

        case 2:
            booth.vehiclePayingToll(2,300);
            break;

        case 3:
            booth.vehiclePayingToll(3,350);
            break;

        case 4:
            cout << "Total Vehicles: " << booth.getTotalVehicles() << endl;
            break;

        case 5:
            cout << "Total Revenue: Rs " << booth.getTotalRevenue() << endl;
            break;

        case 6:
            booth.resetBooth();
            cout << "Booth statistics reset\n";
            break;

        case 7:
            cout << "Exiting program\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while(choice != 7);

    return 0;
}