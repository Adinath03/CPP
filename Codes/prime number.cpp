#include<iostream>
using namespace std;

bool check_prime(int n)
{
    for (int i = 2; i <=n ; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        
    }
    return true;
    
}
void get_prime(int n)
{
    for (int i = 2; i <=n; i++)
    {
        if(check_prime(i)){
            cout << i << "  ";

        }
    }
}

int main()
{
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    get_prime(n)

    
}