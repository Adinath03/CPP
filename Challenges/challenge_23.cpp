#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    if (m % n == 0)
    {
        while (n < m)
        {
            while (m % (n * 3) == 0 && n < m)
            {
                n = n * 3;
                count++;
            }
            while (m % (n * 2) == 0 && n < m)
            {
                n = n * 2;
                count++;
            }
        }
        cout << count;
    }
    else
    {
        cout<<"-1";
    }
        
}