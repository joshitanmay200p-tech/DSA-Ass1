#include <bits/stdc++.h>
using namespace std;

// Forward declaration of functions students must implement
void insertElement(int arr[], int &n, int pos, int value);
void deleteElement(int arr[], int &n, int pos);
int searchElement(int arr[], int n, int key);

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;

    // Insert test
    insertElement(arr, n, 2, 99); // insert 99 at pos=2
    if (arr[2] != 99 || n != 6)
    {
        cerr << "❌ Insert failed\n";
        return 1;
    }

    // Delete test
    deleteElement(arr, n, 2); // delete value at pos=2 (99)
    if (n != 5 || arr[2] != 3)
    {
        cerr << "❌ Delete failed\n";
        return 1;
    }

    // Search test
    int pos = searchElement(arr, n, 4);
    if (pos == -1 || arr[pos] != 4)
    {
        cerr << "❌ Search failed\n";
        return 1;
    }

    cout << "✅ Core tests passed\n";
    return 0;
}
