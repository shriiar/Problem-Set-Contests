#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k;
    cin >> s >> k;
    int x=s.size(), y=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        if(k[i]>='A' && k[i]<='Z')
        {
            k[i]=k[i]+32;
        }
    }
    for(int i=0; i<x; i++)
    {
        if(i==x-1 && s[i]==k[i])
        {
            cout<<"0"<<endl;
        }
        if(s[i]>k[i])
        {
            cout<<"1"<<endl;
            break;
        }
        if(s[i]<k[i])
        {
            cout<<"-1"<<endl;
            break;
        }
    }
}
