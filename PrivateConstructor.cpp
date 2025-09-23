#include <bits/stdc++.h>
using namespace std;

class Phone{
private:
    Phone(int x) {
        volume = x;
    }
public:
    int volume;
    friend Phone hello(int x);

};

Phone hello(int x) {
    return Phone(x);
}

int main() {

    Phone p = hello(12);
    cout << p.volume << endl;

    return 0;
}
