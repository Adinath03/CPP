#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{
    int key;
    cin >> key;
    int odd[5] = {10, 20, 30, 40, 50};
    int even[6] = {1, 2, 3, 4, 5, 6};
    cout << binarySearch(odd, 5, key) << endl;
    cout << binarySearch(even, 6, key) << endl;
}