#include <iostream>
using namespace std;
int main() {
    int size = 2;
    int* arr = new int[size];
    int front = 0, rear = 0;
    for (int i = 0; i < 5; i++) {
        if (rear == size) {
            int* temp = new int[size * 2];
            for (int j = 0; j < size; j++)
                temp[j] = arr[j];
            delete[] arr;
            arr = temp;
            size *= 2;
        }
        arr[rear++] = i;
    }
    for (int i = front; i < rear; i++)
        cout << arr[i] << " ";
}