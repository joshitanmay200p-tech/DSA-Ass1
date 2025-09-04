#include <bits/stdc++.h>
using namespace std;

// Forward declaration of functions students must implement
void insertElement(vector<int> &arr, int pos, int value);
void deleteElement(vector<int> &arr, int pos);
int searchElement(const vector<int> &arr, int value);
void updateElement(vector<int> &arr, int pos, int newValue);

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    // Edge Case: Insert at beginning
    insertElement(arr, 0, 5);
    if (arr[0] != 5) {
        cerr << "❌ Insert at beginning failed\n";
        return 1;
    }

    // Edge Case: Insert at end
    insertElement(arr, arr.size(), 60);
    if (arr.back() != 60) {
        cerr << "❌ Insert at end failed\n";
        return 1;
    }

    // Edge Case: Search non-existing element
    int pos = searchElement(arr, 999);
    if (pos != -1) {
        cerr << "❌ Search for non-existing element failed\n";
        return 1;
    }

    // Edge Case: Delete last element
    deleteElement(arr, arr.size() - 1);
    if (arr.back() == 60) {
        cerr << "❌ Delete last element failed\n";
        return 1;
    }

    cout << "✅ Bonus edge case tests passed\n";
    return 0;
}
