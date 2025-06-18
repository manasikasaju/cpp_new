#include <iostream>
using namespace std;

class Shape {
public:
    void getArea() {
        cout << "Calculating area..." << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Overriding the getArea method
    void getArea() {
        double area = length * width;
        cout << "Area of rectangle: " << area << endl;
    }
};

int main() {
    Rectangle rect(5.0, 4.0);

    rect.getArea(); // Calls overridden method
    rect.Shape::getArea(); // Calls base class method

    return 0;
}
