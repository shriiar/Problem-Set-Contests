#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack <char> a;
        bool f = true;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                a.push(s[i]);
            else if(s[i]==')')
            {
                if(!a.empty() && a.top()=='(')
                    a.pop();
                else
                {
                    f = false;
                    break;
                }
            }
            else if(s[i]=='}')
            {
                if(!a.empty() && a.top()=='{')
                    a.pop();
                else
                {
                    f = false;
                    break;
                }
            }
            else if(s[i]==']')
            {
                if(!a.empty() && a.top()=='[')
                    a.pop();
                else
                {
                    f = false;
                    break;
                }
            }
        }
        if(a.empty() && f==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
