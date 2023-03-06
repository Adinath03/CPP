#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]-'a']++;
    }
    
    char ans = 'a';
    int maxf = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxf)
        {
            maxf = freq[i];
            ans = i + 'a';
        }
        
    }
    cout<< maxf <<" "<< ans;
    return 0;
}