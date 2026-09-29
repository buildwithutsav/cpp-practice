#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:

    Book(string t, string a) {
        title = t;
        author = a;
    }

    void displayBook() {

        cout << "Book: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

class LibraryMember {
private:
    string memberName;

    Book issuedBook;

public:

    LibraryMember(string name,
                  string title,
                  string author)
        : issuedBook(title, author) {

        memberName = name;
    }

    void display() {

        cout << "Member: "
             << memberName << endl;

        issuedBook.displayBook();
    }
};

int main() {

    LibraryMember member(
        "Utsav",
        "The Alchemist",
        "Paulo Coelho"
    );

    member.display();

    return 0;
}