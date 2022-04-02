#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    stack <int> as;
    for(int i=0; i<a.size(); i++)
    {
        as.push(a[i]);
    }
    vector <int> b;
    for(int i=0; i<n-1; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    for(int i=b.size()-1; i>=0; i--)
    {
        if(as.top()==b[i])
            as.pop();
        else
        {
            cout<<as.top()<<endl;
            as.pop();
            i++;
        }
    }
    if(!as.empty())
        cout<<as.top()<<endl;
    stack <int> bs;
    for(int i=0; i<b.size(); i++)
    {
        bs.push(b[i]);
    }
    vector <int> c;
    for(int i=0; i<n-2; i++)
    {
        int x;
        cin >> x;
        c.push_back(x);
    }
    sort(c.begin(), c.end());
    for(int i=c.size()-1; i>=0; i--)
    {
        if(bs.top()==c[i])
            bs.pop();
        else
        {
            cout<<bs.top()<<endl;
            bs.pop();
            i++;
        }
    }
    if(!bs.empty())
        cout<<bs.top()<<endl;
}
