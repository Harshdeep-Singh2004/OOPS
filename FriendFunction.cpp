#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Friend function to overload <<
    friend ostream& operator<<(ostream& out, const Complex& c);
};

// Definition of friend function
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main() {
    Complex c1(3, 4), c2(1, 2);

    cout << "First complex number: " << c1 << endl;
    cout << "Second complex number: " << c2 << endl;
}
