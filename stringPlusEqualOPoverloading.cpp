#include <iostream>
#include <cstring>
using namespace std;

class Str {
private:
    char str[80];

public:
    Str() { str[0] = '\0'; }

    Str(const char s[]) {
        strcpy(str, s);
    }

    // Overload += operator
    Str operator+=(const Str& s2) {
        strcat(str, s2.str);
        return *this;
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    Str s1("Hello ");
    Str s2("World");
    Str s3;

    s3 = s1 += s2;

    cout << "s1: ";
    s1.display();

    cout << "s3: ";
    s3.display();

    return 0;
}
