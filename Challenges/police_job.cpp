#include <iostream>
using namespace std;

bool searcharray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < a)
        {
            a = arr[i];
        }
    }
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = a + i;
    }
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (searcharray(arr, arr1[i]))
        {
            c = c;
        }
        else
        {
            c++;
        }
    }

    cout << c;
}