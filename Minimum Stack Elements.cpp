#include <iostream>
using namespace std;
struct Node {
    int data;
    int min;
    Node* next;
};
Node* top = NULL;
void push(int x) {
    Node* n = new Node;
    n->data = x;
    n->min = (top == NULL) ? x : min(x, top->min);
    n->next = top;
    top = n;
}
int main() {
    push(5);
    push(2);
    push(8);
    cout << "Min: " << top->min << endl;
}