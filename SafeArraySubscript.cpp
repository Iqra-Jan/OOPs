#include <iostream>
#include <cstdlib>
using namespace std;

class SafeArray {
private:
    int* arr;
    int low, high;

public:
    SafeArray(int l, int h) {
        low = l;
        high = h;
        arr = new int[high - low + 1];
    }

    int& operator[](int index) {
        if (index < low || index > high) {
            cout << "Index out of bounds\n";
            exit(1);
        }
        return arr[index - low];
    }

    ~SafeArray() {
        delete[] arr;
    }
};

int main() {
    SafeArray sa(5, 9);

    for (int i = 5; i <= 9; i++)
        sa[i] = i * 10;

    for (int i = 5; i <= 9; i++)
        cout << sa[i] << " ";

    return 0;
}
