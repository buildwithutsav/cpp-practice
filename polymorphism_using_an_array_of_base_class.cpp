
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(double l, double w)
        : length(l), width(w) {}

    double area() override {
        return length * width;
    }
};

class Circle : public Shape {
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Rectangle r(5, 4);
    Circle c(3);

    Shape* shapes[2] = {&r, &c};

    for (int i = 0; i < 2; i++) {
        cout << "Area: " << shapes[i]->area()
             << endl;
    }

    return 0;
}
