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
int main()
{
    Fastio;
    ll n, m, gcd, res, indx;
    cin >> n >> m;
    vl x, p, d;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        x.pb(val);
        if (i > 0)
            d.pb(x[i] - x[i - 1]);
    }
    for (int i = 0; i < m; i++)
    {
        ll val;
        cin >> val;
        p.pb(val);
    }
    gcd = d[0];
    for (int i = 1; i < d.sz; i++)
        gcd = __gcd(gcd, d[i]);
    for (int i = 0; i < p.sz; i++)
    {
        if (gcd % p[i] == 0)
        {
            cout << "YES" << endl;
            ll mod;
            if (x[0] % p[i] == 0)
                mod = x[0];
            else
                mod = x[0] % p[i];
            cout << mod << " " << i + 1 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}