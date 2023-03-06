#include <iostream>
using namespace std;

void sortarray(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main()
{
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    sortarray(arr, x);
    int count = 0;
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        if (sum <= arr[i])
        {
            count++;
            sum = sum + arr[i];
        }
    }
    cout << count;
}