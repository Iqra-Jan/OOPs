#include <iostream>
#include <cmath>
using namespace std;

class Polar {
private:
    double r, a;   // radius, angle (degrees)

public:
    Polar(double rad = 0, double ang = 0) : r(rad), a(ang) {}

    Polar operator+(const Polar& p) const {
        double x1 = r * cos(a * M_PI / 180);
        double y1 = r * sin(a * M_PI / 180);

        double x2 = p.r * cos(p.a * M_PI / 180);
        double y2 = p.r * sin(p.a * M_PI / 180);

        double x = x1 + x2;
        double y = y1 + y2;

        double rad = sqrt(x * x + y * y);
        double ang = atan2(y, x) * 180 / M_PI;

        return Polar(rad, ang);
    }

    void display() const {
        cout << "Radius = " << r << ", Angle = " << a << endl;
    }
};

int main() {
    Polar p1(5, 30), p2(4, 60);
    Polar p3 = p1 + p2;

    p3.display();
    return 0;
}
