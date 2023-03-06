#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = 0, max = 0;
    if (n % 7 == 0)
    {
        min = (n / 7) * 2;
        max = (n / 7) * 2;
    }
    else if (n % 7 == 6)
    {
        min = (n / 7) * 2 + 1;
        max = (n / 7) * 2 + 2;
    }
    else if (n % 7 == 1)
    {
        min = (n / 7) * 2;
        max = (n / 7) * 2 + 1;
    }
    else if (n % 7 > 1 && n % 7 < 6)
    {
        min = (n / 7) * 2 ;
        max = (n / 7) * 2 + 2;
    }
    cout << min << " " << max;
}