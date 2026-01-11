#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Queue {
    Node* front;
    Node* rear;
public:
    Queue() { front = rear = NULL; }
    void enqueue(int x) {
        Node* n = new Node{x, NULL};
        if (!rear) {
            front = rear = n;
            return;
        }
        rear->next = n;
        rear = n;
    }
    void dequeue() {
        if (!front) return;
        Node* temp = front;
        front = front->next;
        if (!front) rear = NULL;
        delete temp;
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
}