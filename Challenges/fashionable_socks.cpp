#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0, count1 = 0;
    if (a > b)
    {
        while (b > 0)
        {
            a--;
            b--;
            count++;
        }
        while (a > 1)
        {
            a--;
            a--;
            count1++;
        }
        cout << count << " " << count1;
    }
    else if (b > a)
    {
        while (a > 0)
        {
            a--;
            b--;
            count++;
        }
        while (b > 1)
        {
            b--;
            b--;
            count1++;
        }
        cout << count << " " << count1;
    }
    else if (a == b)
    {
        cout << a << " "
             << "0";
    }

    return 0;
}