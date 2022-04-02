#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int x = s.size(), y=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
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
