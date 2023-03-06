#include <iostream>
using namespace std;

class adinath
{
public:
    void fun()
    {
        cout << " Function with no arguments." << endl;
    }
    void fun(int x)
    {
        cout << " Function with int arguments." << endl;
    }
    void fun(double)
    {
        cout << " Function with double argument. " << endl;
    }
};
int main()
{
    adinath obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.5);
    return 0;
}