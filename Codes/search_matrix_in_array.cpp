#include<iostream>
using namespace std;

int main()
{
int n,m,x;
cout<<"Enter no of rows and colums in array: ";
cin>>n>>m;

int arr[n][m];
cout<<"Enter elments in 2d array: "<<"\n";
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin>>arr[i][j];
    }
    
}
cout<<"Entered Matrix is: "<<"\n";
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout<<arr[i][j]<<" ";

    }
    cout<<"\n";

}

cout<<"Enter number to search in Matrix: ";
cin>>x;
bool flag = false;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(arr[i][j]==x)
        {
            cout<<i<<" "<<j<<"\n";
            cout<<arr[i][j]<<"\n";
            flag = true; 
        }
    }
    
}

if(flag) {
    cout<<"Element is found!";
}
else {
    cout<<"Element not found.";
}
return 0;

}

