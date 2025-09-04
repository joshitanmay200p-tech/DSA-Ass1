#include <bits/stdc++.h>
using namespace std;

// Forward declaration of functions students must implement
void insertElement(vector<int> &arr, int pos, int value);
void deleteElement(vector<int> &arr, int pos);
int searchElement(const vector<int> &arr, int value);
void updateElement(vector<int> &arr, int pos, int newValue);

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    // Insert test
    insertElement(arr, 2, 99); // insert 99 at pos=2
    if (arr[2] != 99) {
        cerr << "❌ Insert failed\n";
        return 1;
    }

    // Delete test
    deleteElement(arr, 2); // delete value at pos=2 (99)
    if (arr.size() != 5 || arr[2] != 3) {
        cerr << "❌ Delete failed\n";
        return 1;
    }

    // Search test
    int pos = searchElement(arr, 4);
    if (pos == -1 || arr[pos] != 4) {
        cerr << "❌ Search failed\n";
        return 1;
    }

    // Update test
    updateElement(arr, 1, 42);
    if (arr[1] != 42) {
        cerr << "❌ Update failed\n";
        return 1;
    }

    cout << "✅ Core tests passed\n";
    return 0;
}
