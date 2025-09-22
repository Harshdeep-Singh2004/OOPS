#include <iostream>
using namespace std;

class Deep {
private:
    int* data;

public:
    Deep(int val) {
        data = new int(val);
    }

    // Custom copy constructor (deep copy)
    Deep(const Deep& other) {
        data = new int(*other.data);  // Allocate new memory & copy value
    }

    void display() const {
        cout << "Value: " << *data << " (Address: " << data << ")" << endl;
    }

    ~Deep() {
        cout << "Destructor freeing memory: " << data << endl;
        delete data;
    }
};

int main() {
    Deep obj1(20);
    Deep obj2 = obj1;  // Deep copy (separate memory allocated)

    obj1.display();
    obj2.display();  // Different addresses → independent copies

    return 0;
}
