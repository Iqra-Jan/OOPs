#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

    void normalize() {
        if (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
        if (minutes < 0) {
            minutes += 60;
            hours--;
        }
    }

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    // Prefix ++
    Time operator++() {
        minutes++;
        normalize();
        return *this;
    }

    // Postfix ++
    Time operator++(int) {
        Time temp = *this;
        minutes++;
        normalize();
        return temp;
    }

    // Prefix --
    Time operator--() {
        minutes--;
        normalize();
        return *this;
    }

    // Postfix --
    Time operator--(int) {
        Time temp = *this;
        minutes--;
        normalize();
        return temp;
    }

    void display() const {
        cout << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main() {
    Time t(2, 59);

    ++t;
    t.display();

    t--;
    t.display();

    return 0;
}
