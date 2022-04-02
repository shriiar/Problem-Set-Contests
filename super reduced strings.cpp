#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s.size()==1)
        cout<<s<<endl;
    else
    {
        stack <char> a;
        a.push(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            if(!a.empty() && a.top()==s[i])
                a.pop();
            else
                a.push(s[i]);
        }
        if(a.empty())
            cout<<"Empty String"<<endl;
        else
        {
            vector <char> v;
            while(!a.empty())
            {
                v.push_back(a.top());
                a.pop();
            }
            reverse(v.begin(), v.end());
            for(int i=0; i<v.size(); i++)
                cout<<v[i];
        }
    }
}
