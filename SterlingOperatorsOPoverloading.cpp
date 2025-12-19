#include <iostream>
using namespace std;

class sterling {
private:
    int pounds, shillings, pence;

    void normalize() {
        shillings += pence / 12;
        pence %= 12;
        pounds += shillings / 20;
        shillings %= 20;
    }

public:
    sterling(int p = 0, int s = 0, int pe = 0)
        : pounds(p), shillings(s), pence(pe) {
        normalize();
    }

    // convert to double
    operator double() const {
        return pounds + shillings / 20.0 + pence / 240.0;
    }

    sterling operator+(const sterling& s) const {
        return sterling(pounds + s.pounds,
                        shillings + s.shillings,
                        pence + s.pence);
    }

    sterling operator-(const sterling& s) const {
        return sterling(pounds - s.pounds,
                        shillings - s.shillings,
                        pence - s.pence);
    }

    sterling operator*(double x) const {
        double total = (double)(*this) * x;
        int p = total;
        int s = (total - p) * 20;
        int pe = (total - p - s / 20.0) * 240;
        return sterling(p, s, pe);
    }

    sterling operator/(double x) const {
        double total = (double)(*this) / x;
        int p = total;
        int s = (total - p) * 20;
        int pe = (total - p - s / 20.0) * 240;
        return sterling(p, s, pe);
    }

    void display() const {
        cout << "£" << pounds << " "
             << shillings << "s "
             << pence << "d" << endl;
    }
};

int main() {
    sterling s1(5, 10, 6);
    sterling s2(2, 5, 9);

    (s1 + s2).display();
    (s1 - s2).display();
    (s1 * 2).display();
    (s1 / 2).display();

    return 0;
}
