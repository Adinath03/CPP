#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m % 3 == 0 || m % 7 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}