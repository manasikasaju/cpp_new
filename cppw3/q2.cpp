#include <iostream>
using namespace std;

void incrementByValue(int x) {
    x = x + 5;
}

void incrementByReference(int &x) {
    x = x + 5;
}

int main() {
    int num = 10;

    incrementByValue(num);
    // num is still 10 because only a copy was passed
    cout << "After incrementByValue, num = " << num << endl;

    incrementByReference(num);
    // num becomes 15 because we passed the actual variable
    cout << "After incrementByReference, num = " << num << endl;

    // Explanation:
    // Pass by value does not change the original variable.
    // Pass by reference changes the original variable directly.
    return 0;
}
