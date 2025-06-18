#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Number of characters: " << fullName.length() << endl;

    size_t spacePos = fullName.find(' ');
    if (spacePos != string::npos) {
        cout << "Position of first space: " << spacePos << endl;
        string firstName = fullName.substr(0, spacePos);
        string replacedName = firstName + " XYZ";
        cout << "Modified name: " << replacedName << endl;
    } else {
        cout << "No space found in name." << endl;
    }

    return 0;
}
