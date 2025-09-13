#include <bits/stdc++.h>
using namespace std;

class Deep {
private:
    int *p;
public:
    Deep(int data) {
        p = new int(data);
    }
    Deep(Deep &other) {
        p = new int(*other.p);
    }

    void print() {
        cout << "Address : " << p << endl;
    }
};

int main() {

    Deep curr(10);
    curr.print();

    Deep nxt = curr;
    nxt.print();

}
