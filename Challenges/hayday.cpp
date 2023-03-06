#include <iostream>
using namespace std;

int value(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cout << value(m) << endl;
        }
    return 0;
}