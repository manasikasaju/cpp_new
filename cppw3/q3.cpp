#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publicationYear;

    void displayBookDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << publicationYear << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Book book1;
    book1.title = "C++ Basics";
    book1.author = "John Doe";
    book1.publicationYear = 2020;

    Book book2;
    book2.title = "OOP in C++";
    book2.author = "Jane Smith";
    book2.publicationYear = 2023;

    book1.displayBookDetails();
    book2.displayBookDetails();

    return 0;
}
