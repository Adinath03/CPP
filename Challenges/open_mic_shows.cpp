#include <iostream>
using namespace std;

void value()
{
    int x, y, z;
    cin >> x >> y >> z;
    int sum = x + 2 * y + 3 * z;
    if (sum % 2 == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        value();
    }
}