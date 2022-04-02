#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    ll n, x, c = 1, z = 1; cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.pb(x);
    }
    for(int i=0; i<n-1; i++)
    {
        if(v[i]*2>=v[i+1]) c++;
        else
        {
            z = max(c, z);
            c = 1;
        }
    }
    if(c!=1) z = max(z, c);
    cout<<z<<endl;
    return 0;
}
