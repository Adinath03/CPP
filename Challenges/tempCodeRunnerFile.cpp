#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n == 1)
    {
        cout << "0";
        return 0;
    }
    sort(arr, arr + n);

    int ans1 = min(abs(a - arr[n - 2]), abs(a - arr[0])) + abs(arr[n - 2] - arr[0]);

    int ans2 = min(abs(a - arr[n - 1]), abs(a - arr[1])) + abs(arr[n - 1] - arr[1]);

    cout << min(ans1, ans2);
    /*for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }*/
    
    return 0;
}