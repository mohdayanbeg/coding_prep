#include <iostream>
#include <vector>
#include <algorithm> // For swap function

using namespace std; // Use the standard namespace

/**
 * @brief Utility function to print the elements of the vector.
 * @param arr The vector to print.
 */
void printArray(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

/**
 * @brief Partitions the array around a pivot element.
 * * It places the pivot element at its correct sorted position, and places all
 * elements smaller than the pivot to the left of the pivot and all greater
 * elements to the right of the pivot.
 * * @param arr The vector to partition.
 * @param low The starting index of the sub-array.
 * @param high The ending index of the sub-array.
 * @return int The index of the pivot element after partitioning.
 */
int partition(vector<int>& arr, int low, int high) {
    // Choose the rightmost element as the pivot
    int pivot = arr[high]; 
    
    // Index of the smaller element (tracks the position to swap smaller elements into)
    int i = (low - 1); 

    // Iterate through elements from low to high - 1
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            // Increment index of smaller element
            i++; 
            // Swap the current element with the element at position i
            swap(arr[i], arr[j]);
        }
    }
    
    // Swap the pivot element (originally at arr[high]) with the element 
    // at the position (i + 1), which is its final sorted position.
    swap(arr[i + 1], arr[high]);
    
    // Return the partitioning index
    return (i + 1);
}

/**
 * @brief Implements the Quick Sort algorithm recursively.
 * * Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot 
 * and partitions the given array around the picked pivot.
 * * @param arr The vector to be sorted.
 * @param low The starting index of the sub-array (initially 0).
 * @param high The ending index of the sub-array (initially size - 1).
 */
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // p_index is partitioning index, arr[p_index] is now at the correct place
        int p_index = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSort(arr, low, p_index - 1);
        quickSort(arr, p_index + 1, high);
    }
}

// Main function to test the Quick Sort implementation
int main() {
    // Define an array of integers
    vector<int> data = {10, 7, 8, 9, 1, 5, 12, 4};
    int n = data.size();

    cout << "Original array: ";
    printArray(data);

    // Call quickSort function
    quickSort(data, 0, n - 1);

    cout << "Sorted array:   ";
    printArray(data);
    
    cout << "\nQuick Sort completed successfully." << endl;

    return 0;
}
