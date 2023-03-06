#include <iostream>
using namespace std;

void value()
{
    int n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i]!=0)
        {
            count++;
        }
    }
    if (count == (n - 1))
    {
        cout << "1" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                count++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                while (arr[i] != 0 && arr[j] != 0)
                {
                    arr[i]--;
                    arr[j]--;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        if (count > 0 && sum == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        value();
    }
}