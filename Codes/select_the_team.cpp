#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n];
    int count = 0;
    if (n < 3)
    {
        cout << "0";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (5-arr[i]>=m)
            {
                count++;
            }
        }
        cout << count / 3;
    }
}