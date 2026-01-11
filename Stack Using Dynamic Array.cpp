#include <iostream>
using namespace std;
int main() {
    int size = 2, top = -1;
    int* arr = new int[size];
    for (int i = 0; i < 5; i++) {
        if (top == size - 1) {
            int* temp = new int[size * 2];
            for (int j = 0; j < size; j++)
                temp[j] = arr[j];
            delete[] arr;
            arr = temp;
            size *= 2;
        }
        arr[++top] = i;
    }
    for (int i = top; i >= 0; i--)
        cout << arr[i] << " ";
}