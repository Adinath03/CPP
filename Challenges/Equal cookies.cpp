#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[m]={0};
    for (int i = 0; i < n; i++)
    {
        arr[i%m]++;
    }
    for (int i = 0; i < m; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}