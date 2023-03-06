#include <iostream>
using namespace std;

int price(int b, int c, int s, int g, int a)
{
    int x = 0, y = 0;
    int price = 0;
    if (g >= a)
    {
        while (c != 0 && b > 1)
        {
            c--;
            b--;
            b--;
            x++;
        }
        while (s != 0 && b > 1)
        {
            s--;
            b--;
            b--;
            y++;
        }
        price = x * g + y * a;
    }
    else
    {
        while (s != 0 && b > 1)
        {
            s--;
            b--;
            b--;
            y++;
        }
        while (c != 0 && b > 1)
        {
            c--;
            b--;
            b--;
            x++;
        }
        price = x * g + y * a;
    }
    return price;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int b, c, s;
        cin >> b >> c >> s;
        int g, a;
        cin >> g >> a;
        cout << price(b, c, s, g, a) << endl;
    }
    return 0;
}