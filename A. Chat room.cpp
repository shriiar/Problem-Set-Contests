#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k="hello";
    cin >> s;
    int x = s.size(), z = k.size(), l=0, y=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]!=k[l])
        {
            continue;
        }
        else if(s[i]==k[l])
        {
            l++;
        }
        if(l==z)
        {
            y=1;
            break;
        }
    }
    if(y==1)
        cout<<"YES"<<endl;
    if(y==0)
        cout<<"NO"<<endl;
}
