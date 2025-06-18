#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    void honk() {
        cout << "Vehicle makes a sound!" << endl;
    }
};

class Car : public Vehicle {
public:
    string model;

    void displayCarInfo() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota"; // Accessing protected member via derived class
    myCar.model = "Corolla";

    myCar.honk(); // Inherited method
    myCar.displayCarInfo();

    return 0;
}
