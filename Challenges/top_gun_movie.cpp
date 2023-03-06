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
    /*if (arr[0] != 25)
    {
        cout << "Give change";
        return 0;
    }
    else if (arr[1] != 25 || arr[1] != 50)
    {
        cout << "Give change";
        return 0;
    }*/
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int val = 0;
        if (arr[i] == 25)
        {
            sum = sum + arr[i];
            count++;
        }
        if (arr[i] > 25)
        {
            val = arr[i] - 25;
            if ((sum - val) >= 0)
            {
                sum = sum - val;
                count++;
            }
        }
    }
    if (count == n)
    {
        cout << "Enjoy the movie";
    }
    else
    {
        cout << "Give change";
    }
}