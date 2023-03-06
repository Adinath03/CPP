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
    
    
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        sum = (arr[i]/100000)%10 + (arr[i]/10000)%10 + (arr[i]/1000)%10 - (arr[i]/100)%10 - (arr[i]/10)%10 - (arr[i])%10;
        if (sum==0)
        {
            cout<<"WON"<<endl;
        }
        else
        {
            cout<<"LOST"<<endl;
        }
        
    }
    return 0;
}