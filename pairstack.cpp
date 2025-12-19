#include <iostream>
using namespace std;

class Stack {
protected:
    int arr[10];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == 9) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }
};

class PairStack : public Stack {
public:
    void pushPair(int a, int b) {
        Stack::push(a);
        Stack::push(b);
    }

    void popPair() {
        int second = Stack::pop();
        int first = Stack::pop();

        if (first != -1 && second != -1) {
            cout << "Popped pair: (" << first << ", " << second << ")\n";
        }
    }
};

int main() {
    PairStack ps;

    ps.pushPair(10, 20);
    ps.pushPair(30, 40);

    ps.popPair();
    ps.popPair();

    return 0;
}
