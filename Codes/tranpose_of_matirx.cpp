#include<iostream>
using namespace std;

int main()
{
int n,m;
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
for (int i = 0; i < n; i++)
{
    for (int j = i; j < m; j++)
    {
        int temp = arr[i][j];
        arr[i][j]= arr[j][i];
        arr[j][i] = temp;
    }
    
}
cout<<"Transpose Matrix is: "<<"\n";
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout<<arr[i][j]<<" ";

    }
    cout<<"\n";
}
}