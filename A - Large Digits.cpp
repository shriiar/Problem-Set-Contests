#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s, t;
    cin >> s >> t;
    int ss = 0, tt = 0;
    for(int i=0; i<s.size(); i++)
    {
        int x = s[i] - '0';
        ss += x;
    }
    for(int i=0; i<t.size(); i++)
    {
        int x = t[i] - '0';
        tt += x;
    }
    if(ss>=tt)
        cout<<ss<<endl;
    else
        cout<<tt<<endl;
}
