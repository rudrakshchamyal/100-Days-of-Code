#include <iostream>
#include <vector>
#include <utility> // For std::swap

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    // One by one move the boundary of the unsorted subarray
    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted array
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (minIdx != i) {
            std::swap(arr[i], arr[minIdx]);
        }
    }
}

// Helper function to print the array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {64, 25, 12, 22, 11};

    std::cout << "Original array: ";
    printArray(data);

    selectionSort(data);

    std::cout << "Sorted array:   ";
    printArray(data);

    return 0;
}