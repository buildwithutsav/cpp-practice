#include <iostream>
using namespace std;

class Book {
private:
    int bookID;
    float price;

public:
    Book(int id, float p) {
        bookID = id;
        price = p;
    }

    bool operator==(const Book &b) {
        if(bookID == b.bookID && price == b.price)
            return true;
        else
            return false;
    }
};

int main() {
    Book b1(101, 500);
    Book b2(101, 500);

    if(b1 == b2) {
        cout << "Both books are equal." << endl;
    }
    else {
        cout << "Books are not equal." << endl;
    }

    return 0;
}