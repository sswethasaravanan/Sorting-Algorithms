#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n, i;
    cout << "\nEnter the number of data elements to be sorted: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    cout << "\nSorted Data: ";
    for (i = 0; i < n; i++)
    {
        cout << "->" << arr[i];
    }
    return 0;
}
