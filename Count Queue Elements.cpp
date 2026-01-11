#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node* front = NULL;
    int count = 0;
    for (int i = 1; i <= 5; i++) {
        Node* n = new Node{i, front};
        front = n;
    }
    Node* temp = front;
    while (temp) {
        count++;
        temp = temp->next;
    }
    cout << "Total elements: " << count << endl;
}