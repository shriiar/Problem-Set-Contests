#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack <char> ss, sss;
        int x = 0, y = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                ss.push(s[i]);
            else if(!ss.empty() && s[i]==')')
            {
                ss.pop();
                x++;
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='[')
                sss.push(s[i]);
            else if(!sss.empty() && s[i]==']')
            {
                sss.pop();
                y++;
            }
        }
        cout<<x+y<<endl;
    }
}
