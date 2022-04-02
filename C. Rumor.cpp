#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define mp make_pair
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define vplb vector<pair<long long, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define iton (ll i = 0; i < n; i++)
#define seti set<int>
#define setl set<long long>
#define mapl map<long long, long long>
#define mapi map<int, int>
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
const int N = 1e5 + 7;
vl v;
vb b(N, 0);
vv pr(N);
void dfs(int indx, ll &mx)
{
    b[indx] = 1;
    mx = min(mx, v[indx-1]);
    for (auto i : pr[indx])
    {
        if (!b[i])
            dfs(i, mx);
    }
}
int main()
{
    Fastio;
    ll n, m, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        v.pb(val);
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        pr[x].pb(y);
        pr[y].pb(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!b[i])
        {
            ll mx = 1e9;
            dfs(i, mx);
            ans += mx;
        }
    }
    cout << ans << endl;
    return 0;
}