#include <iostream>
using namespace std;

class sterling {
protected:
    int pounds;
    int shillings;
    int pence;

public:
    sterling() : pounds(0), shillings(0), pence(0) {}

    sterling(int p, int s, int pe) {
        pounds = p;
        shillings = s;
        pence = pe;
    }

    void getdata() {
        cout << "Enter pounds: ";
        cin >> pounds;
        cout << "Enter shillings: ";
        cin >> shillings;
        cout << "Enter pence: ";
        cin >> pence;
    }

    void putdata() const {
        cout << "Sterling: £" << pounds << " "
             << shillings << "s "
             << pence << "d" << endl;
    }
};

class bMoney : public sterling {
private:
    double decimalMoney;

public:
    bMoney() : sterling(), decimalMoney(0.0) {}

    void convert() {
        decimalMoney = pounds +
                       (shillings / 20.0) +
                       (pence / 240.0);
    }

    void display() const {
        cout << "Decimal Money: " << decimalMoney << " pounds" << endl;
    }
};

int main() {
    bMoney bm;

    cout << "\n--- Enter Sterling Amount ---\n";
    bm.getdata();

    bm.convert();

    cout << "\n--- Output ---\n";
    bm.putdata();
    bm.display();

    return 0;
}
