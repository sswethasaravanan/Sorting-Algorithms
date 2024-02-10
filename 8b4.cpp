#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) 
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements for the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}

