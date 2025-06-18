#include <iostream>
using namespace std;

class Resource {
public:
    Resource() {
        cout << "Resource acquired!" << endl;
    }

    ~Resource() {
        cout << "Resource released!" << endl;
    }
};

int main() {
    Resource r1; // created in main scope

    {
        Resource r2; // created in inner scope
    } // r2 goes out of scope here, so destructor is called

    // r1 destructor is called at the end of main

    // Explanation:
    // r2 is destroyed first because it was declared inside inner braces.
    // r1 is destroyed last because it lives in main's scope.
    return 0;
}
