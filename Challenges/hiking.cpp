#include <iostream>
using namespace std;

void selectionSort(int a[], int n)
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
    int n;
    cin >> n;
    int a;
    cin >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    int j = 0;
    /*for (int i = 0; i < n; i++)
    {
        if (arr[i]<=a && arr[i+1]>= a )
        {
            j = i;
        }
    }*/
    int max1, max2;
    max1 = ((arr[n - 1] - a) * 2) + (a - arr[1]);
    max2 = ((a - arr[0]) * 2) + (arr[n - 2] - 1);
    if (max1 < max2)
    {
        cout << max1;
    }
    else
    {
        cout << max2;
    }

    return 0;
}