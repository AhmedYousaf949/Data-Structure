#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node* front = NULL;
    if (front == NULL)
        cout << "Queue is Empty\n";
    else
        cout << "Queue is not Empty\n";
}