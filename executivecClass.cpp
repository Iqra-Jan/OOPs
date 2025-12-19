#include <iostream>
#include <string>
using namespace std;

class employee2 {
protected:
    int empNo;
    string name;

public:
    void getdata() {
        cout << "Enter employee number: ";
        cin >> empNo;
        cin.ignore();
        cout << "Enter employee name: ";
        getline(cin, name);
    }

    void putdata() const {
        cout << "Employee Number: " << empNo << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class manager : public employee2 {
protected:
    string title;
    double dues;

public:
    void getdata() {
        employee2::getdata();
        cout << "Enter manager title: ";
        getline(cin, title);
        cout << "Enter club dues: ";
        cin >> dues;
        cin.ignore();
    }

    void putdata() const {
        employee2::putdata();
        cout << "Title: " << title << endl;
        cout << "Club Dues: " << dues << endl;
    }
};

class executive : public manager {
private:
    double bonus;

public:
    void getdata() {
        manager::getdata();
        cout << "Enter yearly bonus: ";
        cin >> bonus;
    }

    void putdata() const {
        manager::putdata();
        cout << "Yearly Bonus: " << bonus << endl;
    }
};

int main() {
    executive e;

    cout << "\n--- Enter Executive Details ---\n";
    e.getdata();

    cout << "\n--- Executive Information ---\n";
    e.putdata();

    return 0;
}
