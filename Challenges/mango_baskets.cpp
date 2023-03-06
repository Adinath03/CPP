#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;
    int n = y * y;
    int m = 1;
    while (n > m)
    {
        cout << m << " " << n<< endl;
        n--;
        m++;
    }
    return 0;
}