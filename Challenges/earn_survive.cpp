#include <iostream>
using namespace std;

void diamond()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (a > 1 || b > 1 )
    {
        if (a >= b && a > 0 && b > 0)
        {
            a--;
            a--;
            b--;
            count++;
        }
        if (b >= a && a > 0 && b > 0)
        {
            b--;
            b--;
            a--;
            count++;
        }
        if (a==0 || b==0)
        {
            break;
        }
        
    }
    cout << count<<endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        diamond();
    }
}