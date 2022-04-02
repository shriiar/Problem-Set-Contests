#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod = 1e9 + 7
#define fr first
#define se second
#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    double n, vp, vd, t, f, cm, p = 0, pp = 0;
    ll m, val, res, rep, dis, idx1, idx2, indx;
    ll cnt = 0, sum = 0, mx = 1e9 + 7, mn = -1;
    bool ff = 1, gg = 0;

    cin >> vp >> vd >> t >> f >> cm;
    if (vp >= vd)
    {
        cout << cnt << endl;
        return 0;
    }
    p += (t * vp);
    pp = (p / (vd - vp)); // confused
    p += (pp * vp); 
    while (p < cm)
    {
        cnt++;
        pp = (p / vd); // confused
        p += (pp * vp);
        p += (f * vp);
        pp = (p / (vd - vp)); // confused
        p += (pp * vp);
    }
    cout << cnt << endl;
    return 0;
}
