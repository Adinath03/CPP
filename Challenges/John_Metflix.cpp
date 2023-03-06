#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[0] > 15)
        {
            cout << "15";
            return 0;
        }
        if ((arr[i + 1] - arr[(i)]) < 15)
        {
            if ((arr[i] + 15) >= 90)
            {
                cout << "90";
                return 0;
            }
        }
        else if ((arr[i + 1] - arr[(i)]) > 15)
        {
            sum = arr[i] + 15;
            if (sum >= 90)
            {
                cout << "90";
                return 0;
            }
            else
            {
                cout << sum;
                return 0;
            }
        }
    }
    return 0;
}