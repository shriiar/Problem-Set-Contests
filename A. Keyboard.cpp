#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    string s;
    cin >> c >> s;
    char a[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o','p','a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l',';','z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    if(c=='R')
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<=30; j++)
            {
                if(s[i]==a[j])
                {
                    s[i] = a[j-1];
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<=30; j++)
            {
                if(s[i]==a[j])
                {
                    s[i] = a[j+1];
                    break;
                }
            }
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i];
    }
}
