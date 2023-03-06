#include <iostream>
using namespace std;

void pedigree()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    while (a > 0 && x > 0)
    {
        a--;
        x--;
    }
    while (b > 0 && y > 0)
    {
        b--;
        y--;
    }
    if (c >= (x + y))
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pedigree();
    }
}