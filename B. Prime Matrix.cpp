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
const int SZ = 1e6 + 3;
vb b(SZ, 1);
void seive(vector<int> &v)
{
    b[0] = 0, b[1] = 0;
    for (int i = 2; i * i <= SZ; i++)
    {
        if (b[i])
        {
            for (int j = i * i; j <= SZ; j += i)
                b[j] = 0;
        }
    }
    for (int i = 2; i <= SZ; i++)
    {
        if (b[i])
            v.pb(i);
    }
}
int main()
{
    Fastio;
    ll n, m, ans = 1e18;
    cin >> n >> m;
    int a[n][m];
    vi v;
    seive(v);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            a[i][j] = val;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ll tt = 0;
        for (int j = 0; j < m; j++)
        {
            auto it = lower_bound(v.begin(), v.end(), a[i][j]);
            int dis = it - v.begin();
            tt += (v[dis] - a[i][j]);
        }
        ans = min(tt, ans);
    }
    for (int i = 0; i < m; i++)
    {
        ll tt = 0;
        for (int j = 0; j < n; j++)
        {
            auto it = lower_bound(v.begin(), v.end(), a[j][i]);
            int dis = it - v.begin();
            tt += (v[dis] - a[j][i]);
        }
        ans = min(tt, ans);
    }
    cout << ans << endl;
    return 0;
}