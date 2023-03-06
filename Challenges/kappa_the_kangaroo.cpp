#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int i;
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '.')
        {
            pos++;
        }
        if (arr[i] == '#')
        {
            int j=i;
            int count = 0;
            while (arr[i] != '#' || (j+k) > count)
            {
                count++;
                pos++;
                i++;
            }
        }
    }
    cout << pos;
}