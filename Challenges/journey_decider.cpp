#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        val = val + arr[i];
    }
    int s,t;
    cin>>s>>t;
    int sum=0;
    
    if (s<t)
    {
        for (int i = s-1; i < t-1; i++)
        {
            sum = sum + arr[i];
        }
        cout<<min(sum,(val-sum))<<endl;
    }
    else if (s>t)
    {
        for (int i =t-1 ; i < s-1; i++)
        {
            sum = sum + arr[i];
        }
        cout<<min(sum,(val-sum))<<endl;
    }
    else
    {
        sum = 0;
        cout<<min(sum,(val-sum))<<endl;
    }
    return 0;
}
