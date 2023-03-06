#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 1, maxcount = 0;
    if (m == 1)
    {
        cout << "1";
        return 0;
    }
    else
    {
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                count++;
            }
            if (arr[i] == arr[i + 1])
            {
                if (maxcount < count)
                {
                    maxcount = count;
                }
                count = 1;
            }
        }
    }
    if (maxcount > count)
    {
        cout << maxcount;
    }
    else
    {
        cout << count;
    }
}