#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s.size(), c=0, d=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            c++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            d++;
        }
    }
    if(c>d)
    {
        for(int i=0; i<x; i++)
        {
            if(s[i]>='a' && s[i]<='z')
                s[i] = s[i] - 32;
        }
    }
    else if(c<=d)
    {
        for(int i=0; i<x; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i] = s[i] + 32;
        }
    }
    cout<<s<<endl;
}
