#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Stack {
    Node* top;
public:
    Stack() { top = NULL; }
    void push(int x) {
        Node* n = new Node;
        n->data = x;
        n->next = top;
        top = n;
    }
    void pop() {
        if (!top) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    void display() {
        Node* temp = top;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.display();
    s.pop();
    s.display();
}