#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time() {
        hours = 0;
        minutes = 0;
    }

    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

    Time operator+(Time t2) const {
        int h = hours + t2.hours;
        int m = minutes + t2.minutes;

        if (m >= 60) {
            m -= 60;
            h++;
        }

        return Time(h, m);
    }

    void display() const {
        cout << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main() {
    Time t1(2, 45);
    Time t2(1, 30);

    Time t3 = t1 + t2;

    t3.display();

    return 0;
}
