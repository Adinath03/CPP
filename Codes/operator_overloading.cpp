#include <iostream>
using namespace std;

class complex
{
private:
    int real, iamg;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        iamg = i;
    }
    complex operator+(complex const &obj)
    {
        complex res;
        res.iamg = iamg + obj.iamg;
        res.real = real + obj.real;
        return res;
    }

    void display()
    {
        cout << real << " + i" << iamg << endl;
    }
};

int main()
{
    complex c1(12, 7);
    complex c2(4, 3);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}