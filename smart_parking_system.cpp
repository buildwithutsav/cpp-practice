//Question: Create a Parking class. Each vehicle object should contain its vehicle number and parking duration. Use a static data member to track the total number of vehicles currently parked.
//Charge ₹20 per hour.

#include <iostream>
#include <string>
using namespace std;

class Parking {
private:
    string vehicleNumber;
    int hours;

    static int totalVehicles;

public:
    Parking(string number, int h) {
        vehicleNumber = number;
        hours = h;

        totalVehicles++;
    }

    void calculateBill() {
        cout << "Vehicle: " << vehicleNumber << endl;
        cout << "Parking Charge: Rs. "
             << hours * 20 << endl;
    }

    static void showTotalVehicles() {
        cout << "Total Vehicles: "
             << totalVehicles << endl;
    }
};

int Parking::totalVehicles = 0;

int main() {

    Parking p1("RJ14AB1234", 3);
    Parking p2("RJ27CD5678", 2);
    Parking p3("RJ19XY9876", 5);

    p1.calculateBill();
    p2.calculateBill();
    p3.calculateBill();

    Parking::showTotalVehicles();

    return 0;
}