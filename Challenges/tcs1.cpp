#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x = m * m;
    if (x % n == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}