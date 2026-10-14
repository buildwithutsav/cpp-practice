
#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor" << endl;
    }

    virtual ~Animal() {
        cout << "Animal destructor" << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor" << endl;
    }

    ~Dog() override {
        cout << "Dog destructor" << endl;
    }
};

int main() {
    Animal* ptr = new Dog();

    delete ptr;

    return 0;
}
