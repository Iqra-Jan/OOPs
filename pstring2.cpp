#include <iostream>
#include <cstring>
using namespace std;

class Pstring {
protected:
    char str[80];

public:
    Pstring() {
        str[0] = '\0';
    }

    Pstring(const char s[]) {
        strcpy(str, s);
    }

    void display() const {
        cout << str << endl;
    }
};

class Pstring2 : public Pstring {
public:
    Pstring2() : Pstring() {}

    Pstring2(const char s[]) : Pstring(s) {}

    Pstring2 left(int n) {
        char temp[80];
        strncpy(temp, str, n);
        temp[n] = '\0';
        return Pstring2(temp);
    }

    Pstring2 right(int n) {
        int len = strlen(str);
        char temp[80];
        strncpy(temp, str + (len - n), n);
        temp[n] = '\0';
        return Pstring2(temp);
    }

    Pstring2 mid(int pos, int n) {
        char temp[80];
        strncpy(temp, str + pos, n);
        temp[n] = '\0';
        return Pstring2(temp);
    }
};

int main() {
    Pstring2 s("ObjectOrientedProgramming");

    cout << "Original string: ";
    s.display();

    cout << "Left 6 characters: ";
    s.left(6).display();

    cout << "Right 11 characters: ";
    s.right(11).display();

    cout << "Middle from position 6 (8 chars): ";
    s.mid(6, 8).display();

    return 0;
}
