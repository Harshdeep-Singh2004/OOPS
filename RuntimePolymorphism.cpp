#include <bits/stdc++.h>
using namespace std;

// The main work of the runtime polymorphism is the function over-riding at the run-time

class Payment {
public:
    virtual void pay(double amount) = 0; // pure virtual → must be overridden
};

class CreditCardPayment : public Payment {
public:
    void pay(double amount) {
        cout << "Paid " << amount << " using Credit Card\n";
    }
};

class PayPalPayment : public Payment {
public:
    void pay(double amount) {
        cout << "Paid " << amount << " using PayPal\n";
    }
};

class UpiPayment : public Payment {
public:
    void pay(double amount) {
        cout << "Paid " << amount << " using UPI\n";
    }
};

// When you use virtual:
// Each class with virtual functions gets a hidden vtable (array of function pointers).
// Each object stores a hidden pointer (vptr) to its class’s vtable.
// At runtime, p->pay() looks up the correct function in the vtable.
// When you don’t use virtual:
// The compiler directly binds p->pay() to Payment::pay at compile time.
// No vtable, no runtime check.

int main() {

    double amount = 500.0;

    Payment* p;  // base class pointer

    // Imagine user selects payment method:
    int choice;
    cout << "Select payment method: 1=CreditCard, 2=PayPal, 3=UPI\n";
    cin >> choice;

    if (choice == 1) p = new CreditCardPayment();
    else if (choice == 2) p = new PayPalPayment();
    else p = new UpiPayment();

    p->pay(amount);  // dynamic binding → correct function called

    delete p;
    return 0;


}
