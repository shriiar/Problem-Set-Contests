#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    bool f = false;
    if(s.size()==3)
    {
        if(((s[0]=='A' && s[1]=='B') || (s[0]=='B' && s[1]=='A')) && (s[2]!='A' && s[2]!='B'))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(((s[i]=='A' && s[i+1]=='B') || (s[i]=='B' && s[i+1]=='A')) && (s[i+2]!='A' && s[i+2]!='B'))
            {
                f = true;
                i++;
            }
            else
            {
                f = false;
                break;
            }
        }
        if(f==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
