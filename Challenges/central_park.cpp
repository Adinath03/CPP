#include<iostream>
using namespace std;

void value(int arr[],int n, int m)
{
    int min;
    int max =0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    if (m%n==0)
    {
        cout<<(min + m/n)<<" "<<(max + m);
    }
    else
    {
        cout<<(min + m/n+1)<<" "<<(max + m);
    }
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    value(arr,n,m);
}