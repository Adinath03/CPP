#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            while (arr[j] > 1 && arr[i] > 0)
            {
                arr[i]--;
                arr[j]--;
                arr[j]--;
                count++;
            }
        }
    }
    cout<<count;
}
