#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, l = 0, r = 0, c = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
            l++;
        else
            r++;
    }
    if(l==r)
    {
        stack <char> ss;
        ss.push(s[0]);
        for(int i=1; i<n; i++)
        {
            if(!ss.empty() && ss.top()=='(' && s[i]==')')
            {
                ss.pop();
                c++;
            }
            else
                ss.push(s[i]);
        }
        l -= c;
        r -= c;
        if((l==0 && r==0) || (l==1 && r==1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
