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
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            while (arr[i] > 0 && arr[j] > 0)
            {
                arr[i] = arr[i] - 1;
                arr[j] = arr[j] - 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}