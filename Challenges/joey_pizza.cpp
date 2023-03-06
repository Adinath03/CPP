#include <iostream>
using namespace std;

int main()
{
    int p;
    cin >> p;
    int sum = 0;
    int x;
    cin >> x;
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = ((i + 1) * p);
    }
    for (int i = 0; i < m; i++)
    {
        sum += arr[i];
    }
    if ((sum - x) >= 0)
    {
        cout << sum - x;
    }
    else
    {
        cout << "0";
    }
    return 0;
}