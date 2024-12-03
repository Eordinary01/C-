#include <iostream>
#define SIZE 5
using namespace std;

class Stack {
    int items[SIZE], top;

public:
  
    Stack() { top = -1; }


    bool isEmpty() {
        return top == -1;
    }

    
    bool isFull() {
        return top == SIZE - 1;
    }

    
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full" << endl;
        } else {
            items[++top] = value;
            cout << "Pushed " << value << " onto the stack." << endl;
        }
    }

    
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Popped top element: " << items[top--] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();

    return 0;
}
