#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int x=0;
    while (m>=n)
    {
        m = m-n;
        x++;
    }
    if (x%2==0)
    {
        cout<<"Lily Loses"<<endl;
    }
    else
    {
        cout<<"Lily Wins"<<endl;
    }
    return 0;
}