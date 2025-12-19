#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

    void normalize() {
        while (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
        while (minutes < 0) {
            minutes += 60;
            hours--;
        }
    }

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    // Subtract two Time objects
    Time operator-(const Time& t2) const {
        Time t(hours - t2.hours, minutes - t2.minutes);
        t.normalize();
        return t;
    }

    // Multiply Time by float
    Time operator*(float f) const {
        int totalMin = (hours * 60 + minutes) * f;
        return Time(totalMin / 60, totalMin % 60);
    }

    void display() const {
        cout << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main() {
    Time t1(3, 30);
    Time t2(1, 45);

    Time t3 = t1 - t2;
    Time t4 = t1 * 2.0f;

    t3.display();
    t4.display();

    return 0;
}
