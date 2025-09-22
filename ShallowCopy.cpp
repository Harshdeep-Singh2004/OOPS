// We have three types of constructors that are default, parameterized and copy constructor.
#include <iostream>
using namespace std;

class Shallow {
private:
    int* data;

public:
    Shallow(int val) {
        data = new int(val);
    }

    // Default copy constructor (shallow copy)
    // Compiler provides this automatically

    void display() const {
        cout << "Value: " << *data << " (Address: " << data << ")" << endl;
    }

    ~Shallow() {
        cout << "Destructor freeing memory: " << data << endl;
        delete data;
    }
};

int main() {
    Shallow obj1(10);
    Shallow obj2 = obj1;
    
    obj1.display();
    obj2.display();
    obj1.display();
    obj1.display();
    obj2.display();
    obj1.display();
    obj1.display();
    obj2.display();
    obj1.display();
    obj1.display();
    obj1.display();
    obj2.display();
    obj1.display();

    return 0;
}
