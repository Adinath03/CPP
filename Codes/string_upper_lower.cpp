#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    getline(cin,str);

    // convert intp upper case
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >='a' && str[i] <='z')
        {
            str[i] -= 32;
        }
        
    }
    cout<<str<<endl;

    //convert string to lower case
    for (int  i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        
    }
    cout<<str<<endl;
    
    transform(str.begin(),str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
}