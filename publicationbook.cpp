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

class book : public publication {
private:
    int pages;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
        cin.ignore();
    }

    void putdata() const {
        publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class tape : public publication {
private:
    float playingTime;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playingTime;
        cin.ignore();
    }

    void putdata() const {
        publication::putdata();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
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
