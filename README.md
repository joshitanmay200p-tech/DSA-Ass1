# 📘 Assignment: Array Primitive Operations in C++

## 🎯 Objective

This assignment will help you understand and implement **basic operations on arrays** in C++:

- Insertion
- Deletion
- Searching
- Traversal

You will also practice handling **edge cases** such as inserting/deleting at the start or end of the array, and dealing with invalid indices.

---

## 📂 Starter Code

Inside the `starter_code/array_ops.cpp` file, you will find function declarations with empty bodies.  
Your task is to complete the following functions:

```cpp
void insertElement(int arr[], int &n, int pos, int value);
void deleteElement(int arr[], int &n, int pos);
int searchElement(int arr[], int n, int key);
void traverseArray(int arr[], int n);
```

---

## Instructions

1. Open with Code Space
2. Navigate to the Ass1 folder and open it in editor.
3. Implement the functions inside `starter_code/array_ops.cpp`.
4. Do **not** change the function signatures or test files.
5. You may add helper functions if needed.
6. After implementation, commit and push your changes:
   ```bash
   git add .
   git commit -m "Completed array operations assignment"
   git push origin main
   ```

---

## Running Tests

You can test your implementation locally.  
Run the following command in the root folder of the repository:

```bash
g++ tests/sample_test.cpp starter_code/array_ops.cpp -o sample && ./sample
```

If everything is correct, you will see:

```
 Core tests passed!
 Bonus tests passed! (2 extra marks)
```

---

## Requirements

- Use arrays (not STL containers like `vector`) for implementation.
- Code must compile without errors.
- Handle invalid indices gracefully (do not crash the program).
- Follow clean coding practices and add meaningful comments.

---

## Grading Scheme

- **Core Functionality (70%)**
  - Correct implementation of insert, delete, search, and traverse.
- **Code Quality (20%)**
  - Proper indentation, meaningful variable names, and comments.
- **Documentation (10%)**
  - Clear explanation of logic in comments and commit messages.

---

## Bonus (2 Marks)

Extra marks will be awarded if:

- Insert works correctly at **start** and **end** of the array.
- Delete works correctly at **start** and **end** of the array.
- Invalid insert/delete positions are handled safely.

---

## 📌 Example Usage

```cpp
int arr[100] = {1, 2, 3, 4, 5};
int n = 5;

insertElement(arr, n, 2, 10);   // arr = {1, 2, 10, 3, 4, 5}
deleteElement(arr, n, 4);       // arr = {1, 2, 10, 3, 5}
int idx = searchElement(arr, n, 10); // idx = 2
traverseArray(arr, n);          // prints: 1 2 10 3 5
```

---

✨ **Tip for Students:** Commit early and often. Don’t wait until the last moment!
