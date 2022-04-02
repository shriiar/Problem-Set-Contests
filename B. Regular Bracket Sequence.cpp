#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    stack <char> ss;
    ss.push(s[0]);
    int c = 0;
    for(int i=1; i<s.size(); i++)
    {
        if(!ss.empty() && ss.top()=='(' && s[i]==')')
        {
            ss.pop();
            c++;
        }
        else
            ss.push(s[i]);
    }
    cout<<c*2<<endl;
}
