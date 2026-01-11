#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node* top = NULL;
    for (int i = 1; i <= 3; i++) {
        Node* n = new Node{i, top};
        top = n;
    }
    Node* prev = NULL;
    Node* curr = top;
    while (curr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    top = prev;
    while (top) {
        cout << top->data << " ";
        top = top->next;
    }
}