#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int o;
    cin >> o;
    int arr2[o];
    for (int i = 0; i < o; i++)
    {
        cin >> arr2[i];
    }
    int count = 0;
    int arr1[n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == 0 && arr[j] == i + 1)
            {
                count++;
                arr1[i] = 1;
            }
        }
        if (arr1[i] == 0)
        {
            for (int k = 0; k < o; k++)
            {
                if (arr1[i] == 0 && arr2[k] == i + 1)
                {
                    count++;
                    arr1[i] = 1;
                }
            }
        }
    }
    if (count == n)
    {
        cout<<"CONTEST WON";
    }
    else
    {
        cout<<"CONTEST LOST";
    }
    

}