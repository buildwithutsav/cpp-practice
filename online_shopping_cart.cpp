#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:

    void input() {

        cout << "Enter product name: ";
        getline(cin >> ws, name);

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    double getTotal() {
        return price * quantity;
    }

    void display() {

        cout << name
             << " | Rs. " << price
             << " | Quantity: " << quantity
             << " | Total: Rs. " << getTotal()
             << endl;
    }
};

int main() {

    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product *cart = new Product[n];

    for(int i = 0; i < n; i++) {

        cout << "\nProduct " << i + 1 << endl;
        cart[i].input();
    }

    double totalBill = 0;

    cout << "\n----- CART -----\n";

    for(int i = 0; i < n; i++) {

        cart[i].display();

        totalBill += cart[i].getTotal();
    }

    cout << "\nTotal Bill = Rs. "
         << totalBill << endl;

    delete[] cart;

    return 0;
}