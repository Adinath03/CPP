#include <iostream>
using namespace std;
int smallest(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}
int main()
{
    int m, n, o, p;
    int a, b;
    cin >> m;
    cin >> n;
    cin >> o;
    cin >> p;
    cin >> a;
    cin >> b;
    int sum = 1;

    if (a > b)
    {
        if (m > p)
        {
            sum = sum * p;
            m = m - p;
            p = 0;
        }
        else if (p > m)
        {
            sum = sum * m;
            p = p - m;
            m = 0;
        }
        else
        {
            sum = sum * m;
            p=0;
        }
        sum = sum + b * smallest(n, o, p);
        cout << sum;
    }
    else if(b>a)
        {
            sum = b * smallest(n, o, p);
            p = p - smallest(n, o, p);
            if (p > m)
            {
                sum = sum + a * (m);
            }
            else if (m > p)
            {
                sum = sum + a * (p);
            }
            else
            {
                sum = sum + a * (p);
            }
            cout << sum;
        }
    else
    {
        if (m > p)
        {
            sum = sum * p;
            m = m - p;
            p = 0;
        }
        else if (p > m)
        {
            sum = sum * m;
            p = p - m;
            m = 0;
        }
        else
        {
            sum = sum * m;
        }
        sum = sum + b * smallest(n, o, p);
        cout << sum;
    }
}
