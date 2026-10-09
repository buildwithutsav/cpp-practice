#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;
    virtual ~Printable() {}
};

class Scannable {
public:
    virtual void scan() = 0;
    virtual ~Scannable() {}
};

class MultifunctionMachine : public Printable, public Scannable {
public:
    void print() override {
        cout << "Printing document..." << endl;
    }

    void scan() override {
        cout << "Scanning document..." << endl;
    }
};

int main() {
    MultifunctionMachine machine;

    Printable* p = &machine;
    Scannable* s = &machine;

    p->print();
    s->scan();

    return 0;
}