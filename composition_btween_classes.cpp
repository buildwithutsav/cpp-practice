
#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started." << endl;
    }
};

class Car {
private:
    Engine engine;

public:
    void startCar() {
        cout << "Starting car..." << endl;
        engine.start();
        cout << "Car is ready." << endl;
    }
};

int main() {
    Car c;
    c.startCar();

    return 0;
}
