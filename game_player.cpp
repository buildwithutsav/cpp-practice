#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int level;
    int score;

public:

    Player(string n, int l, int s) {
        name = n;
        level = l;
        score = s;
    }

    Player(const Player &p) {

        name = p.name;
        level = p.level;
        score = p.score;

        cout << "Copy Constructor Called!" << endl;
    }

    void display() {

        cout << "Name: " << name << endl;
        cout << "Level: " << level << endl;
        cout << "Score: " << score << endl;
    }
};

int main() {

    Player p1("Utsav", 15, 8500);

    Player p2 = p1;

    cout << "\nOriginal Player:\n";
    p1.display();

    cout << "\nCopied Player:\n";
    p2.display();

    return 0;
}