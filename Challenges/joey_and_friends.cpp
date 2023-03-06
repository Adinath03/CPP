#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (3*max % arr[i] != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}