#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double price;
    int quantity;

    // Default constructor
    Product() {
        name = "Unknown";
        price = 0.0;
        quantity = 0;
    }

    // Constructor with name and price
    Product(string n, double p) {
        name = n;
        price = p;
        quantity = 1;
    }

    // Constructor with all attributes
    Product(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    void displayProduct() {
        cout << "Name: " << name << ", Price: $" << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Product p1;
    Product p2("Pen", 1.50);
    Product p3("Notebook", 3.99, 5);

    p1.displayProduct();
    p2.displayProduct();
    p3.displayProduct();

    return 0;
}
