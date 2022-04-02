#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int x = max(v[0], v[1]);
    for(int i=2; i<n; i++)
    {
        int y = max(v[i-1], v[i]);
        if(y<x)
            x = y;
    }
    int z = min(v[0], v[n-1]);
    if(z<x)
        cout<<z<<endl;
    else
        cout<<x<<endl;
}
