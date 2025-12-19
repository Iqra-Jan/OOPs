#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

class Int {
private:
    int value;

    void checkOverflow(long long result) const {
        if (result > INT_MAX || result < INT_MIN) {
            cout << "Integer overflow detected\n";
            exit(1);
        }
    }

public:
    Int(int v = 0) : value(v) {}

    Int operator+(const Int& i2) const {
        long long r = (long long)value + i2.value;
        checkOverflow(r);
        return Int((int)r);
    }

    Int operator-(const Int& i2) const {
        long long r = (long long)value - i2.value;
        checkOverflow(r);
        return Int((int)r);
    }

    Int operator*(const Int& i2) const {
        long long r = (long long)value * i2.value;
        checkOverflow(r);
        return Int((int)r);
    }

    Int operator/(const Int& i2) const {
        if (i2.value == 0) {
            cout << "Division by zero\n";
            exit(1);
        }
        return Int(value / i2.value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Int a(2000000000), b(2);
    Int c = a + b;   // overflow
    c.display();
    return 0;
}
