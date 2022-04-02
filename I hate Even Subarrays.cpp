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
        stack <int> a;
        a.push(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            if(!a.empty() && s[i]==a.top())
                a.pop();
            else
                a.push(s[i]);
        }
        if(a.empty())
            cout<<"KHALI"<<endl;
        else
        {
            string b;
            while(!a.empty())
            {
                b += a.top();
                a.pop();
            }
            reverse(b.begin(), b.end());
            cout<<b<<endl;
        }
    }
}
