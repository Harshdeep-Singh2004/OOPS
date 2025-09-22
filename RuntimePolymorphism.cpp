#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function (interface)
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle\n";
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle\n";
    }
};

int main() {
    Shape* shape = nullptr;

    int choice;
    cout << "Choose a shape (1=Rectangle, 2=Circle, 3=Triangle): ";
    cin >> choice;

    if (choice == 1) shape = new Rectangle();
    else if (choice == 2) shape = new Circle();
    else if (choice == 3) shape = new Triangle();

    // Same interface call → different behavior at runtime
    if (shape) {
        shape->draw();  // Resolved at runtime based on actual object
        delete shape;
    }

    return 0;
}
