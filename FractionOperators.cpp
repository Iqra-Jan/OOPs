#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;

    int gcd(int a, int b) const {
        return (b == 0) ? a : gcd(b, a % b);
    }

    void reduce() {
        int g = gcd(abs(num), abs(den));
        num /= g;
        den /= g;
    }

public:
    Fraction(int n = 0, int d = 1) : num(n), den(d) {
        reduce();
    }

    Fraction operator+(const Fraction& f) const {
        return Fraction(num * f.den + f.num * den, den * f.den);
    }

    Fraction operator-(const Fraction& f) const {
        return Fraction(num * f.den - f.num * den, den * f.den);
    }

    Fraction operator*(const Fraction& f) const {
        return Fraction(num * f.num, den * f.den);
    }

    Fraction operator/(const Fraction& f) const {
        return Fraction(num * f.den, den * f.num);
    }

    bool operator==(const Fraction& f) const {
        return num == f.num && den == f.den;
    }

    bool operator!=(const Fraction& f) const {
        return !(*this == f);
    }

    void display() const {
        cout << num << "/" << den << endl;
    }

    bool isZeroOne() const {
        return num == 0 && den == 1;
    }
};

int main() {
    while (true) {
        int n1, d1, n2, d2;
        cout << "Enter fraction 1 (n d): ";
        cin >> n1 >> d1;
        cout << "Enter fraction 2 (n d): ";
        cin >> n2 >> d2;

        Fraction f1(n1, d1), f2(n2, d2);

        if (f1.isZeroOne() && f2.isZeroOne())
            break;

        (f1 + f2).display();
        (f1 - f2).display();
        (f1 * f2).display();
        (f1 / f2).display();
    }
    return 0;
}
