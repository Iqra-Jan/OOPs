#include <iostream>
#include <cstdlib>
using namespace std;

class Array {
protected:
    int arr[10];

public:
    void put(int index, int value) {
        arr[index] = value;
    }

    int get(int index) const {
        return arr[index];
    }
};

class SafeArray : public Array {
public:
    void put(int index, int value) {
        if (index < 0 || index >= 10) {
            cout << "Error: Index out of bounds\n";
            exit(1);
        }
        Array::put(index, value);
    }

    int get(int index) const {
        if (index < 0 || index >= 10) {
            cout << "Error: Index out of bounds\n";
            exit(1);
        }
        return Array::get(index);
    }
};

int main() {
    SafeArray sa;

    for (int i = 0; i < 10; i++) {
        sa.put(i, i * 10);
    }

    for (int i = 0; i < 10; i++) {
        cout << sa.get(i) << " ";
    }

    return 0;
}
