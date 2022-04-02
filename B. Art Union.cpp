#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const ll mod = (ll) 1e9 + 7;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n;
    cin >> n >> m;
    vector <ll> v(m+1);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            int x;
            cin >> x;
            v[j] = max(v[j], v[j-1]) + x;
        }
        cout<<v[m]<<" ";
    }
}
