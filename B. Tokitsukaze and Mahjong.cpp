#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector <pair<int, char> > v;
    for(int i=0; i<3; i++)
    {
        string n;
        cin >> n;
        int k = n[0] - '0';
        char j = n[1];
        v.push_back(make_pair(k, j));
    }
    char a, b, c;
    int x, y, z;
    sort(v.begin(), v.end());
    x = v[0].first, a = v[0].second, y = v[1].first, b = v[1].second, z = v[2].first, c = v[2].second;
    if(x==y && y==z && a==b && b==c)
        cout<<0<<endl;
    else if(a==b && b!=c)
    {
        if(x==y || abs(x-y)<=2)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    else if(a!=b && b==c)
    {
        if(y==z || abs(y-z)<=2)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    else if(a!=b && b!=c && a==c)
    {
        if(x==z || abs(x-z)<=2)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    else if(a==b && b==c)
    {
        if(abs(x-y)==1 && abs(y-z)==1)
            cout<<0<<endl;
        else if(abs(x-y)<=2 || abs(y-z)<=2)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    else if(a!=b && b!=c && a!=c)
        cout<<2<<endl;
}
