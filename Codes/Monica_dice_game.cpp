#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int m,n;
    int x = 0;
    int y = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> m >> n;
        if (m > n)
        {
            x++;
        }
        else if (n > m)
        {
            y++;
        }
        else
        {
            x++;
            y++;
        }
    }
    if (x > y)
    {
        cout<<"Monica"<<endl;
    }
    else if (y > x)
    {
        cout<<"Liza"<<endl;
    }
    else
    {
       cout<<"It's a tie"<<endl;
    }
    return 0;
}