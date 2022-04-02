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
        int n, c = 0;
        cin >> n;
        string s;
        cin >> s;
        stack <char> ss;
        ss.push(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            if(!ss.empty() && ss.top()=='(' && s[i]==')')
                ss.pop();
            else
                ss.push(s[i]);
        }
        if(s.empty()==true)
            cout<<"0"<<endl;
        else
            cout<<ss.size()/2<<endl;
    }
}
