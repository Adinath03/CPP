#include <iostream>
using namespace std;

int main()
{
    /*{
    int pocketmoney;
    cin>>pocketmoney;

    for(int i=0; i<=30; i++){
        if(i%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"Day "<<i<<endl;
        cout<<"you can go out\n";
        pocketmoney = pocketmoney-500;


    }
}*/
    /*{
    for (int i = 0; i < 100; i++)
    {
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
        
    }
}*/

    int a, b;
    cout<<"Enter two numbers: ";
    cin >> a >> b;

    for (int num = a; num <= b; num++)
    {
        int i;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
    return 0;
}
