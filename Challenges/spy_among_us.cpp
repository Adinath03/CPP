#include <iostream>
using namespace std;

int position(int m)
{
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    if (m == 1)
    {
        return -1;
    }
    if (m == 2)
    {
        return 0;
    }
    if (arr[0] == arr[1] && arr[0] != arr[2])
        return 3;
    if (arr[0] == arr[2] && arr[0] != arr[1])
        return 2;
    if (arr[1] == arr[2] && arr[0] != arr[1])
        return 1;
    for (int i = 3; i < m; i++)
        if (arr[i] != arr[i - 1])
            return i + 1;
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cout<<position(m)<<endl;
    }
    return 0;
}