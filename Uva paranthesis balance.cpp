#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin, s);
        bool f = true;
        stack <char> a;
        if(s.empty())
            cout<<"Yes"<<endl;
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='(' || s[i]=='[')
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
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}
