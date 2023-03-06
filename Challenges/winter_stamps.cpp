#include <iostream>
using namespace std;

int greatest(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int main()
{
    int t;
    cin >> t;
    int m, n, p, x;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> n >> p >> x;
        int d = 0;
        int y = greatest(m,n,p);
        d= y-m;
        d= d+y-n;
        d= d+y-p;

        if ((x-d<0) || (x-d)%3!=0)
        {
            cout << "NO"<<endl;
        }
        else if ((d-x)%3==0)
        {
            cout << "YES"<<endl;
        }
    }
}