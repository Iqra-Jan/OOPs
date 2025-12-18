#include <iostream>
using namespace std;

class Counter {
protected:
    int count;

public:
    Counter() : count(0) {}

    Counter(int c) : count(c) {}

    int getCount() const {
        return count;
    }

    // Postfix increment
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }
};

class CountDn : public Counter {
public:
    CountDn() : Counter() {}

    CountDn(int c) : Counter(c) {}

    void decrement() {
        count--;
    }
};

int main() {
    CountDn c(5);

    cout << "Initial count: " << c.getCount() << endl;

    c++;
    cout << "After postfix increment: " << c.getCount() << endl;

    c.decrement();
    cout << "After decrement: " << c.getCount() << endl;

    return 0;
}
