#include <bits/stdc++.h>
using namespace std;

class Shallow {
private:
    int *p;
public:
    Shallow(int data) {
        p = new int(data);
    }

    void print() {
        cout << "Address : " << p << endl;
    }
};

int main() {

    Shallow curr(10);
    curr.print();

    Shallow nxt = curr;
    nxt.print();

}
