#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Queue {
public:
    Node* front;
    Node* rear;
    Queue() {
        front = rear = NULL;
    }
    bool isEmpty() {
        return front == NULL;
    }
    void enqueue(int x) {
        Node* n = new Node;
        n->data = x;
        n->next = NULL;
        if (!rear) {
            front = rear = n;
        } else {
            rear->next = n;
            rear = n;
        }
    }
    int dequeue() {
        if (isEmpty())
            return -1;
        Node* temp = front;
        int val = temp->data;
        front = front->next;
        if (!front)
            rear = NULL;
        delete temp;
        return val;
    }
};
class Stack {
    Queue q1, q2;
public:
    void push(int x) {
        q2.enqueue(x);
        while (!q1.isEmpty()) {
            q2.enqueue(q1.dequeue());
        }
        Queue temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop() {
        if (q1.isEmpty()) {
            cout << "Stack Empty\n";
            return;
        }
        cout << "Popped: " << q1.dequeue() << endl;
    }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.pop();
}