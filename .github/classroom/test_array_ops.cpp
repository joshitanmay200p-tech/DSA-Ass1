#include <iostream>
#include <cassert>
using namespace std;

void insertElement(int arr[], int &n, int pos, int value);
void deleteElement(int arr[], int &n, int pos);
int searchElement(int arr[], int n, int key);
void traverseArray(int arr[], int n);

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;

    // ✅ Normal insertion
    insertElement(arr, n, 2, 10);
    assert(arr[2] == 10);
    assert(n == 6);

    // ✅ Normal deletion
    deleteElement(arr, n, 4);
    assert(arr[4] == 5);
    assert(n == 5);

    // ✅ Search element
    int idx = searchElement(arr, n, 10);
    assert(idx == 2);

    // ✅ Search non-existing element
    idx = searchElement(arr, n, 99);
    assert(idx == -1);

    cout << "✅ Core tests passed!" << endl;

    // ---------------- BONUS TESTS ----------------
    int bArr[100] = {1, 2, 3, 4, 5};
    int m = 5;

    // Insert at start
    insertElement(bArr, m, 0, 99);
    assert(bArr[0] == 99);

    // Insert at end
    insertElement(bArr, m, m, 77);
    assert(bArr[m - 1] == 77);

    // Delete first element
    deleteElement(bArr, m, 0);
    assert(bArr[0] != 99); // 99 should be removed

    // Delete last element
    deleteElement(bArr, m, m - 1);

    // Invalid insert (position > size) → should not crash
    insertElement(bArr, m, 999, 123);

    // Invalid delete (position > size) → should not crash
    deleteElement(bArr, m, 999);

    cout << "🎉 Bonus tests passed! (2 extra marks)" << endl;

    return 0;
}
