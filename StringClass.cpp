#include <bits/stdc++.h>
using namespace std;

class String {
private:
    char* res;
    int len;

public:
    String() : res(nullptr), len(0) {}

    explicit String(const char* ch) {
        len = strlen(ch);
        res = new char[len + 1];
        strcpy(res, ch);
    }

    String(const String &str) {
        len = str.len;
        res = new char[len + 1];
        strcpy(res, str.res); // deep copy
    }

    String& operator=(String str) {   // copy and swap idiom
        Swap(*this, str);
        return *this;
    }

    static void Swap(String &str1, String &str2) {
        swap(str1.len, str2.len);
        swap(str1.res, str2.res);
    }

    unsigned int length() const {
        return len;
    }

    friend ostream& operator<<(ostream &out, const String& str);
    friend istream& operator>>(istream &in, String& str);

    ~String() {
        delete[] res;
        res = nullptr;
        len = 0;
    }
};

ostream& operator<<(ostream &out, const String& str) {
    out << (str.res ? str.res : ""); // avoid printing null
    return out;
}

istream& operator>>(istream &in, String& str) {
    char buffer[1000];
    in >> buffer;
    delete[] str.res;
    str.len = strlen(buffer);
    str.res = new char[str.len + 1];
    strcpy(str.res, buffer);
    return in;
}

int main() {
    String str1;              // default constructor
    String str2 = "hello";    // parameterized constructor
    String str3 = str1;       // copy constructor
    str3 = str2;              // copy assignment operator

    cout << str2 << endl;     // << overloading

    cout << "Enter a string: ";
    cin >> str1;              // >> overloading
    cout << "You entered: " << str1 << endl;

    return 0;
}
