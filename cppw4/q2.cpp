#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // shared by all objects
    int id;           // unique for each object

public:
    Counter() {
        count++;
        id = count;
    }

    static void showCount() {
        // cout << "ID: " << id << endl; // ❌ This will cause a compile error!
        // Static functions can't access non-static members because they belong to the class, not to an object.
        cout << "Total Count: " << count << endl;
    }
};

// Define static member outside
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;

    // Accessing static method
    Counter::showCount();

    return 0;
}
