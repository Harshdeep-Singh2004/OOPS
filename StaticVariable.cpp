#include <bits/stdc++.h>
using namespace std;

// Static Variables are called class member variables. They must be declared inside the class but must be initialized outside the class.
// They does not belong to an object.
// Only one time their memory is allocated.

class Character {
public:
    int level;
    int health;

    static int runtime;

    void print() {
        cout << runtime++ << endl;
    }
};

int Character::runtime = 3;

int main() {

    Character c;
    Character d;
    Character e;
    c.print();
    d.print();
    e.print();


}
