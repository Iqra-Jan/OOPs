#include <iostream>
using namespace std;

class bMoney {
private:
    long double money;

public:
    bMoney(long double m = 0.0) : money(m) {}

    bMoney operator+(const bMoney& b) const {
        return bMoney(money + b.money);
    }

    bMoney operator-(const bMoney& b) const {
        return bMoney(money - b.money);
    }

    bMoney operator*(long double x) const {
        return bMoney(money * x);
    }

    long double operator/(const bMoney& b) const {
        return money / b.money;
    }

    bMoney operator/(long double x) const {
        return bMoney(money / x);
    }

    void display() const {
        cout << money << endl;
    }
};

int main() {
    bMoney b1(1000.50), b2(500.25);

    (b1 + b2).display();
    (b1 - b2).display();
    (b1 * 2).display();
    cout << (b1 / b2) << endl;
    (b1 / 2).display();

    return 0;
}
