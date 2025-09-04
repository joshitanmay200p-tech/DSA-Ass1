#include <iostream>
using namespace std;

// Function declarations (implemented by student in array_ops.cpp)
void insertElement(int arr[], int &n, int pos, int value);
void deleteElement(int arr[], int &n, int pos);
int searchElement(int arr[], int n, int key);
void traverseArray(int arr[], int n);

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Initial array: ";
    traverseArray(arr, n);

    insertElement(arr, n, 2, 10);
    cout << "After inserting 10 at pos 2: ";
    traverseArray(arr, n);

    deleteElement(arr, n, 3);
    cout << "After deleting element at pos 3: ";
    traverseArray(arr, n);

    int idx = searchElement(arr, n, 10);
    if (idx != -1)
        cout << "10 found at index " << idx << endl;
    else
        cout << "10 not found" << endl;

    return 0;
}
