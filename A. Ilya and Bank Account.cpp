#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s.size();
    if(s[0]!='-')
        cout<<s<<endl;
    else if(x==3)
    {
        if(s[x-1]=='0' || s[x-2]=='0')
            cout<<"0"<<endl;
        else
        {
            if(s[x-1]>=s[x-2])
            {
                for(int i=0; i<x-1; i++)
                {
                    cout<<s[i];
                }
            }
            else if(s[x-1]<=s[x-2])
            {
                for(int i=0; i<x; i++)
                {
                    if(i!=x-2)
                        cout<<s[i];
                }
            }
        }
    }
    else
    {
        if(s[x-1]>=s[x-2])
        {
            for(int i=0; i<x-1; i++)
            {
                cout<<s[i];
            }
        }
        else if(s[x-1]<=s[x-2])
        {
            for(int i=0; i<x; i++)
            {
                if(i!=x-2)
                    cout<<s[i];
            }
        }
    }
}
