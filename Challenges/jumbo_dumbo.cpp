#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    while (n <= m)
    {
        n = 3 * n;
        m = 2 * m;
        count++;
    }
    cout << count;
}