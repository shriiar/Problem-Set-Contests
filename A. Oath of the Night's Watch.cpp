#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int j;
        cin >> j;
        v.push_back(j);
    }
    int x = v[0];
    for(int i=1; i<v.size(); i++)
    {
        if(v[i]<x)
            x = v[i];
    }
    int y = v[0];
    for(int i=1; i<v.size(); i++)
    {
        if(v[i]>y)
            y = v[i];
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]>x && v[i]<y)
            c++;
    }
    cout<<c<<endl;
}
