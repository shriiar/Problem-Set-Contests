#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string a;
    cin >> a;
    stack <char> s;
    stack <char> v;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='1')
            s.push(a[i]);
        else
            v.push(a[i]);
    }
    while(!s.empty() && !v.empty())
    {
        if(s.top()!=v.top())
        {
            s.pop();
            v.pop();
        }
    }
    if(s.empty() && v.empty())
        cout<<"0"<<endl;
    else if(!s.empty() && v.empty())
        cout<<s.size()<<endl;
    else
        cout<<v.size()<<endl;
}
