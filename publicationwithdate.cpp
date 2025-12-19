#include <iostream>
#include <string>
using namespace std;

class date {
private:
    int day, month, year;

public:
    void getdata() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void putdata() const {
        cout << "Publication Date: "
             << day << "/" << month << "/" << year << endl;
    }
};

class publication {
protected:
    string title;
    float price;
    date pubDate;   // date object inside publication

public:
    void getdata() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        pubDate.getdata();
    }

    void putdata() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        pubDate.putdata();
    }
};

int main() {
    publication p;

    cout << "\n--- Enter Publication Details ---\n";
    p.getdata();

    cout << "\n--- Publication Information ---\n";
    p.putdata();

    return 0;
}
