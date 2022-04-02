#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, x;
    cin >> n;
    vector <int> v;
    vector <int> l;
    vector <int> r;
    vector <int> mx;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    x = v[n-1];
    for(int i=0; i<n; i+=2)
    {
        if(v[i]!=x)
            l.push_back(v[i]);
    }
    for(int i=1; i<n; i+=2)
    {
        if(v[i]!=x)
            r.push_back(v[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]==x)
            mx.push_back(v[i]);
    }
    for(int i=0; i<l.size(); i++)
        cout<<l[i]<<" ";
    for(int i=0; i<mx.size(); i++)
        cout<<mx[i]<<" ";
    for(int i=r.size()-1; i>=0; i--)
        cout<<r[i]<<" ";
    cout<<endl;
}
