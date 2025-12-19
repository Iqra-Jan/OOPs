#include <iostream>
using namespace std;

class sterling {
private:
    int pounds, shillings, pence;

public:
    sterling(int p = 0, int s = 0, int pe = 0)
        : pounds(p), shillings(s), pence(pe) {}

    double toPounds() const {
        return pounds + shillings / 20.0 + pence / 240.0;
    }

    void display() const {
        cout << "£" << pounds << " "
             << shillings << "s "
             << pence << "d" << endl;
    }
};

class bMoney {
private:
    long double dollars;

public:
    bMoney(long double d = 0.0) : dollars(d) {}

    // sterling ? bMoney
    bMoney(const sterling& s) {
        dollars = s.toPounds() * 50;
    }

    // bMoney ? sterling
    operator sterling() const {
        double pounds = dollars / 50;
        int p = pounds;
        int s = (pounds - p) * 20;
        int pe = (pounds - p - s / 20.0) * 240;
        return sterling(p, s, pe);
    }

    void display() const {
        cout << "$" << dollars << endl;
    }
};

int main() {
    sterling s(5, 10, 6);
    bMoney b = s;      // sterling ? bMoney

    b.display();

    sterling s2 = b;  // bMoney ? sterling
    s2.display();

    return 0;
}
