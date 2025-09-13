#include <bits/stdc++.h>
using namespace std;

class Character {
public:
    int level;
    int health;

    static int runtime;

    void print() {
        cout << runtime << endl;
    }

    static void changeRuntime();
};

int Character::runtime = 3;
void Character::changeRuntime() {
    runtime += 4;
}

int main() {

    Character c;;
    c.print();
    Character::changeRuntime();
    c.print();


}
