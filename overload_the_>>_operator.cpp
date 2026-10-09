#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title, author;
    float price;

public:
    friend istream& operator>>(istream& in, Book& b) {
        cout << "Enter title: ";
        getline(in >> ws, b.title);

        cout << "Enter author: ";
        getline(in, b.author);

        cout << "Enter price: ";
        in >> b.price;

        return in;
    }

    friend ostream& operator<<(ostream& out, const Book& b) {
        out << "Title: " << b.title << endl;
        out << "Author: " << b.author << endl;
        out << "Price: " << b.price << endl;

        return out;
    }
};

int main() {
    Book b1;

    cin >> b1;
    cout << "\nBook Details:\n" << b1;

    return 0;
}