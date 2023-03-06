#include <iostream>
#include <iomanip>
using namespace std;

void plusminus(int arr[], int n)
{

    float p = 0, n1 = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            p++;
        }
        else if (arr[i] < 0)
        {
            n1++;
        }
        else
        {
            z++;
        }
    }
    cout << fixed << setprecision(6) << p / n << endl;
    cout << n1 / n << endl;
    cout << z / n << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    plusminus(arr, n);
}