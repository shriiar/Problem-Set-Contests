#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s.size(), y=0, z=x-7;
    for(int i=0; i<=z; i++)
    {
        if(s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3] && s[i]==s[i+4] && s[i]==s[i+5] && s[i]==s[i+6])
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
