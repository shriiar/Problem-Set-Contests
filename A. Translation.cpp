#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int x = t.size(), y=1;
    for(int j=x-1, i=0; j>=0, i<x; j--, i++)
    {
        if(s[i]!=t[j])
        {
            y=0;
            break;
        }
    }
    if(y==1)
        cout<<"YES"<<endl;
    if(y==0)
        cout<<"NO"<<endl;
}
