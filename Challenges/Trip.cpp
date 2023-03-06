#include <iostream>
#include <limits.h>
using namespace std;

void max(int arr[], int n, int m)
{
    int maximum = 0;
    int a;

    for (int i = 0; i < n; i++)
    {
        int max = 0;
        for (int j = 0; j < m; j++)
        {
            if (max <= arr[j] && arr[j] > 0)
            {
                max = arr[j];
                a = j;
            }
        }
        arr[a] = arr[a] - 1;

        maximum += max;
    }
    cout << maximum << " ";
}
void min(int arr1[], int n, int m)
{
    int minimum = 0;
    int a;

    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            if (min >= arr1[j] && arr1[j] > 0)
            {
                min = arr1[j];
                a = j;
            }
        }
        arr1[a] = arr1[a] - 1;

        minimum += min;
    }
    cout << minimum;
}
int main()
{
    int x, m;
    cin >> x >> m;
    int arr[m];
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        arr1[i] = arr[i];
    }

    max(arr, x, m);
    min(arr1, x, m);

    return 0;
}