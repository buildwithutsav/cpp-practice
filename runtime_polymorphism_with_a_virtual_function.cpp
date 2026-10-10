#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w)
        : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);

    Shape* ptr;

    ptr = &c;
    cout << "Circle area: " << ptr->area() << endl;

    ptr = &r;
    cout << "Rectangle area: " << ptr->area() << endl;

    return 0;
}