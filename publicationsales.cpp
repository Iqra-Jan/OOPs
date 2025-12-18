#include <iostream>
#include <string>
using namespace std;

class sales {
protected:
    float salesData[3];

public:
    void getdata() {
        cout << "Enter sales for last 3 months:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> salesData[i];
        }
        cin.ignore();
    }

    void putdata() const {
        cout << "Sales data:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": " << salesData[i] << endl;
        }
    }
};

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

class book : public publication, public sales {
private:
    int pages;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
        sales::getdata();
    }

    void putdata() const {
        publication::putdata();
        cout << "Pages: " << pages << endl;
        sales::putdata();
    }
};

class tape : public publication, public sales {
private:
    float playingTime;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playingTime;
        sales::getdata();
    }

    void putdata() const {
        publication::putdata();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
        sales::putdata();
    }
};

int main() {
    book b;
    tape t;

    cout << "\n--- Enter Book Details ---\n";
    b.getdata();

    cout << "\n--- Enter Tape Details ---\n";
    t.getdata();

    cout << "\n--- Book Information ---\n";
    b.putdata();

    cout << "\n--- Tape Information ---\n";
    t.putdata();

    return 0;
}
