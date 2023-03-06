#include <iostream>
using namespace std;

bool searcharray(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n, m, o;
    cin >> n;
    cin >> m;
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cin >> o;
    int arr2[o];
    for (int i = 0; i < o; i++)
    {
        cin >> arr2[i];
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (searcharray(arr1, m, i) || searcharray(arr2, o, i))
        {
            count++;
        }
        else
        {
            cout << "GAME NOT CLEARED" << endl;
            break;
        }
    }
    if (count == n)
    {
        cout << "GAME CLEARED";
        return 0;
    }
}