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
private:
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

class scientist : public employee2 {
private:
    int publications;

public:
    void getdata() {
        employee2::getdata();
        cout << "Enter number of publications: ";
        cin >> publications;
        cin.ignore();
    }

    void putdata() const {
        employee2::putdata();
        cout << "Publications: " << publications << endl;
    }
};

class laborer : public employee2 {
    // No extra data members
};

int main() {
    manager m;
    scientist s;
    laborer l;

    cout << "\n--- Enter Manager Details ---\n";
    m.getdata();

    cout << "\n--- Enter Scientist Details ---\n";
    s.getdata();

    cout << "\n--- Enter Laborer Details ---\n";
    l.getdata();

    cout << "\n--- Manager Information ---\n";
    m.putdata();

    cout << "\n--- Scientist Information ---\n";
    s.putdata();

    cout << "\n--- Laborer Information ---\n";
    l.putdata();

    return 0;
}
