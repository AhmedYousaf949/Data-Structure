#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Queue {
    Node* front;
public:
    Queue() { 
        front = NULL; 
    }
    void enqueue(int x) {
        Node* n = new Node;
        n->data = x;
        n->next = NULL;

        if (!front) {
            front = n;
            return;
        }
        Node* temp = front;
        while (temp->next)
            temp = temp->next;
        temp->next = n;
    }
    void dequeue() {
        if (!front) {
            cout << "Queue Empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
    }
    void display() {
        Node* temp = front;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.display();
    q.dequeue();
    q.display();
}