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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }
    int j = 0;
    if (count == n)
    {
        cout << count << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << count << endl;
        while (j < n)
        {
            int num = 0;
            do
            {
                num++;
                j++;
            } while (arr[j] != 1 && j < n);
            cout << num << " ";
        }
    }
}