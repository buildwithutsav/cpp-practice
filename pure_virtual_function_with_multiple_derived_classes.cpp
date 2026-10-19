
#include <iostream>
using namespace std;

class Appliance {
public:
    virtual double powerConsumption() const = 0;

    virtual ~Appliance() = default;
};

class Fan : public Appliance {
    double watts, hours;

public:
    Fan(double w, double h)
        : watts(w), hours(h) {}

    double powerConsumption() const override {
        return watts * hours / 1000.0;
    }
};

class Heater : public Appliance {
    double watts, hours;

public:
    Heater(double w, double h)
        : watts(w), hours(h) {}

    double powerConsumption() const override {
        return watts * hours / 1000.0;
    }
};

int main() {
    Fan f(75, 8);
    Heater h(1500, 2);

    Appliance* a[] = {&f, &h};

    cout << "Fan consumption: "
         << a[0]->powerConsumption()
         << " kWh" << endl;

    cout << "Heater consumption: "
         << a[1]->powerConsumption()
         << " kWh" << endl;

    return 0;
}
