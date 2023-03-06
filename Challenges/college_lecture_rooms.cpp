#include <iostream>
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int digit = 0, max = 0;
    while (sum != 0)
    {
        digit = sum % 10;
        if (digit > max)
        {
            max = digit;
        }
        sum /= 10;
    }
    cout << max;
}