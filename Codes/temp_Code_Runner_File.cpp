#include<iostream>
#include<math.h>
using namespace std;
//bug
int main()
{
    int n; 
    cout<<"Enter a number: "<<endl;
    cin>>n;

    int sum=0;
    int originaln = n;

    while (n>10)
    {
        int lastdigit= n%10;
        sum += lastdigit*lastdigit*lastdigit;
        n = n/10;

    }
    
    if (originaln == sum)
    {
        cout<<"Armstrong Number."<<endl;
    }
    else{
        cout<<"Not Armstrong."<<endl;
    }
    return 0;
}