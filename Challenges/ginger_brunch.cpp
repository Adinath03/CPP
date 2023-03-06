#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            count++;
        }
    }
    cout << 4-count;
    return 0;
}