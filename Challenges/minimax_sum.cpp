#include <iostream>
#include <vector>
using namespace std;

void minmaxsum(vector<int> &arr)
{
    int maxno = arr[0];
    int minno = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxno < arr[i])
        {
            maxno = arr[i];
        }
        if (minno > arr[i])
        {
            minno = arr[i];
        }
    }
    long max = 0, min = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != maxno)
        {
            max = max + arr[i];
        }
        if (arr[i] != minno)
        {
            min = min + arr[i];
        }
    }
    cout << max << " " << min;
}
int main()
{
    vector<int> arr(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    minmaxsum(arr);
    return 0;
}