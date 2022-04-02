#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
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
    ll n, k, cnt = 0, alt, ans = 0;
    cin >> n >> k;
    vi u;
    vi v;
    vpi p;
    vb b(n, 0);
    for
        iton
        {
            int val;
            cin >> val;
            u.pb(val);
        }
    for
        iton
        {
            int val;
            cin >> val;
            v.pb(val);
        }
    for (int i = 0; i < n; i++)
    {
        int diff = u[i] - v[i];
        if (diff < 0)
            cnt++;
        p.pb(mp(diff, i));
    }
    sort(p.begin(), p.end());
    if (cnt > k)
        k = cnt;
    alt = k;
    for (int i = 0; i < alt; i++)
    {
        int ind = p[i].second;
        ans += u[ind];
        b[ind] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        int ind = p[i].second;
        if (b[ind])
            continue;
        ans += v[ind];
    }
    cout << ans << endl;
    return 0;
}