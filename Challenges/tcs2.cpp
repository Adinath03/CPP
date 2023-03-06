#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int count = 0, count1 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
    }
    count1 = str.length() - 2 * count;
    if (count == 1 || count1 == 1)
    {
        cout << "Proceed" << endl;
    }
    else
    {
        cout << "Stop" << endl;
    }
    cout << count << " " << count1;
}