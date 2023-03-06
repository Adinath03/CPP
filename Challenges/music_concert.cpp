#include <iostream>
using namespace std;

int main()
{
    int x, m, n;
    cin >> x >> m >> n;
    if (m == 0)
    {
        cout << n + 1;
    }
    else if ((x - m) > n + 1)
    {
        cout << n + 1;
    }
    else
    {
        cout << x - m;
    }
}