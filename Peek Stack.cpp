#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node* top = new Node{50, NULL};
    if (top)
        cout << "Top element: " << top->data << endl;
    else
        cout << "Stack Empty\n";
}