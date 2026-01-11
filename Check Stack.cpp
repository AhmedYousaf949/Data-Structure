#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
int main() {
    Node* top = NULL;

    if (top == NULL)
        cout << "Stack is Empty\n";
    else
        cout << "Stack is not Empty\n";
}