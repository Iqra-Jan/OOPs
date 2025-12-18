#include <iostream>
#include <string>
using namespace std;

class publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore();
    }

    void putdata() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class disk : public publication {
public:
    enum diskType { CD, DVD };

private:
    diskType type;
    float capacity;

public:
    void getdata() {
        publication::getdata();

        int choice;
        cout << "Enter disk type (0 for CD, 1 for DVD): ";
        cin >> choice;

        if (choice == 0)
            type = CD;
        else
            type = DVD;

        cout << "Enter capacity: ";
        cin >> capacity;
    }

    void putdata() const {
        publication::putdata();

        cout << "Disk Type: ";
        if (type == CD)
            cout << "CD" << endl;
        else
            cout << "DVD" << endl;

        cout << "Capacity: " << capacity;
        if (type == CD)
            cout << " MB" << endl;
        else
            cout << " GB" << endl;
    }
};

int main() {
    disk d;

    cout << "\n--- Enter Disk Details ---\n";
    d.getdata();

    cout << "\n--- Disk Information ---\n";
    d.putdata();

    return 0;
}
