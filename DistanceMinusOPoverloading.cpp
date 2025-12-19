#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() {
        feet = 0;
        inches = 0.0;
    }

    Distance(int ft, float in) {
        feet = ft;
        inches = in;
    }

    void getdist() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void showdist() const {
        cout << feet << "\'-" << inches << "\"";
    }

    // Overloaded minus operator
    Distance operator-(Distance d2) const {
        int f = feet - d2.feet;
        float i = inches - d2.inches;

        if (i < 0) {
            i += 12;
            f--;
        }

        return Distance(f, i);
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter first distance:\n";
    d1.getdist();

    cout << "\nEnter second distance:\n";
    d2.getdist();

    d3 = d1 - d2;

    cout << "\nResult of subtraction:\n";
    d3.showdist();

    return 0;
}
