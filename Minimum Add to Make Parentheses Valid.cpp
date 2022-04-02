#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack <char> a;
    a.push(s[0]);
    for(int i=1; i<s.size(); i++)
    {
        if(!a.empty() && a.top()=='(' && s[i]==')')
        {
            a.pop();
        }
        else
            a.push(s[i]);
    }
    cout<<a.size()<<endl;
}
