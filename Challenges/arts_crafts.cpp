#include <iostream>
using namespace std;

int solve(int a, int b, int c)
{
    return a + b + c - 1;
}
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        cout << solve(a, b, c);
    }
    return 0;
}