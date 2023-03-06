#include <iostream>
#include <algorithm>
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
    sort(arr, arr + n);
    if (arr[0] == arr[((n / 2) - 1)] && arr[n / 2] == arr[n - 1] && arr[0]!=arr[n-1])
    {
        cout << "YES" << endl;
        cout << arr[0] << " " << arr[n - 1];
    }
    else
    {
        cout << "NO";
    }
    return 0;
}