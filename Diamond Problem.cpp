#include <bits/stdc++.h>
using namespace std;

class A {
public:
    int a;
};
// For solution
// put virual public A
class B : public A {
public:
    int b;
};

// put virual public A
class C : public A {
public:
    int c;
};
class D : public B, public C {
public:
    int d;
};

int main() {

    D obj;
    cout << obj.a << " ";

}
