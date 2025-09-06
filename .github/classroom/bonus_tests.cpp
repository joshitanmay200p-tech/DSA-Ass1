#include <bits/stdc++.h>
using namespace std;

// Forward declaration of student functions (array-based)
void insertElement(int arr[], int &n, int pos, int value);
void deleteElement(int arr[], int &n, int pos);
int searchElement(int arr[], int n, int key);

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    // Edge Case: Insert at beginning
    insertElement(arr, n, 0, 5);
    if (arr[0] != 5 || n != 6)
    {
        cerr << "❌ Insert at beginning failed\n";
        return 1;
    }

    // Edge Case: Insert at end
    insertElement(arr, n, n, 60);
    if (arr[n - 1] != 60 || n != 7)
    {
        cerr << "❌ Insert at end failed\n";
        return 1;
    }

    // Edge Case: Search non-existing element
    int pos = searchElement(arr, n, 999);
    if (pos != -1)
    {
        cerr << "❌ Search for non-existing element failed\n";
        return 1;
    }

    // Edge Case: Delete last element
    deleteElement(arr, n, n - 1);
    if (arr[n - 1] == 60 || n != 6)
    {
        cerr << "❌ Delete last element failed\n";
        return 1;
    }

    cout << "✅ Bonus edge case tests passed\n";
    return 0;
}
