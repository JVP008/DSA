#include <iostream>
using namespace std;

bool binary_search(const int arr[][3], int rows, int key) {
    int low = 0;
    int high = rows - 1;

    while (low <= high) {
        int row = low + (high - low) / 2;

        if (key < arr[row][0]) {
            high = row - 1;
        } else if (key > arr[row][2]) {
            low = row + 1;
        } else {
            int left = 0;
            int right = 2;

            while (left <= right) {
                int middle = left + (right - left) / 2;

                if (arr[row][middle] == key) {
                    return true;
                } else if (arr[row][middle] < key) {
                    left = middle + 1;
                } else {
                    right = middle - 1;
                }
            }

            return false;
        }
    }

    return false;
}

int main() {
    const int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int key = 3;
    cout << (binary_search(arr, 3, key) ? "Found\n" : "Not Found\n");
    return 0;
}
