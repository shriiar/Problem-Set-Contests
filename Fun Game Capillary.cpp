#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    stack <int> a, b;
    bool f = true;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=n-1; i>=0; i--)
    {
        a.push(v[i]);
    }
    for(int i=0; i<n; i++)
    {
        b.push(v[i]);
    }
    while(f==true)
    {
        if(!a.empty() && !b.empty() && a.top()>b.top())
            {
                b.pop();
                cout<<"1 ";
            }
        else if(!a.empty() && !b.empty() && a.top()<b.top())
            {
                a.pop();
                cout<<"2 ";
            }
        else if(!a.empty() && !b.empty() && a.top()==b.top())
        {
            a.pop();
            b.pop();
            cout<<"0 ";
        }
        else
        {
            f = false;
            break;
        }
    }
}
