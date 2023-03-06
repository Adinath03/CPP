#include <iostream>
using namespace std;

int value(int x, int y)
{
    int arr[x];
    int m = 1;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i] = m;
        m++;
    }
    int i = 0;
    while (y>=i+1)
    {
        for (int i = 0; i < x; i++)
        {
            if (y >= i + 1)
            {
                y = y - arr[i];
            }
            else 
            {
                return y;
            }
        }
        i = 0;
    }
}
int main()
{
    int x;
    cin >> x;
    int y;
    cin >> y;
    value(x, y);
}