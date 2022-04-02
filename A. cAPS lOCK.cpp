#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s.size(), y=0, z=0;
    if((x==1) && (s[0]>='a' && s[0]<='z'))
    {
        s[0] -= 32;
        cout<<s;
    }
    else if((x==1) && (s[0]>='A' && s[0]<='Z'))
    {
        s[0] += 32;
        cout<<s;
    }
    else
    {
        if(s[0]>='a' && s[0]<='z')
        {
            for(int i=1; i<x; i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                    y=1;
                else
                {
                    y=0;
                    break;
                }
            }
        }
        if(s[0]>='A' && s[0]<='Z')
        {
            for(int i=1; i<x; i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                    z=1;
                else
                {
                    z=0;
                    break;
                }
            }
        }
        if(y==1 && z==0)
        {
            for(int i=0; i<x; i++)
            {
                if(i==0)
                {
                    if(s[i]>='a' && s[i]<='z')
                        s[i] -= 32;
                }
                else
                {
                    if(s[i]>='A' && s[i]<='Z')
                        s[i] += 32;
                }
            }
            cout<<s;
        }
        else if(y==0 && z==1)
        {
            for(int i=0; i<x; i++)
            {
                s[i] += 32;
                cout<<s[i];
            }
        }
        if(y==0 && z==0)
            cout<<s;
    }
}
