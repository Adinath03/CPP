#include<iostream>
using namespace std;

int main ()
{
    char arr[9];
    for (int i = 0; i < 9; i++)
    {
        cin>>arr[i];
    }
    if ((arr[0]==arr[8]==*)&& (9arr[1] == arr[7]==*)&& (arr[2]==arr[6]==*)&& (arr[3]==arr[5]==*))
    {
        cout<<"Success";
    }
    else
    {
        cout<<"Try again";
    }
    return 0;
}