#include <iostream>
using namespace std;
class Stack {
public:
    int size = 100;
    int arr[100];
    int top;
    Stack() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    void push(int x) {
        arr[++top] = x;
    }
    int pop() {
        if (isEmpty())
            return -1;
        return arr[top--];
    }
};
class Queue {
    Stack s1, s2;
public:
    void enqueue(int x) {
        s1.push(x);
    }
    void dequeue() {
        if (s1.isEmpty() && s2.isEmpty()) {
            cout << "Queue Empty\n";
            return;
        }
        if (s2.isEmpty()) {
            while (!s1.isEmpty()) {
                s2.push(s1.pop());
            }
        }
        cout << "Dequeued: " << s2.pop() << endl;
    }
};
int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.dequeue();
    q.dequeue();
}