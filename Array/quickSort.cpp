#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i + 1], arr[high]);
    
    return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int p_index = partition(arr, low, high);
        quickSort(arr, low, p_index - 1);
        quickSort(arr, p_index + 1, high);
    }
}

int main() {
    vector<int> data = {10, 7, 8, 9, 1, 5, 12, 4};
    int n = data.size();

    quickSort(data, 0, n - 1);

    cout << "Sorted array: [";
    for (size_t i = 0; i < data.size(); ++i) {
        cout << data[i];
        if (i < data.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}