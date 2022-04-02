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
    ll n, sum = 0;
    cin >> n;
    vi e, op, on;
    for0(i, n)
    {
        int val;
        cin >> val;
        if (val > 0 && val % 2 == 0)
            e.pb(val);
        else if (val < 0 && val % 2 != 0)
            on.pb(val);
        else if (val > 0 && val % 2 != 0)
            op.pb(val);
    }
    sort(op.rbegin(), op.rend());
    for0(i, e.sz)
        sum += e[i];
    for0(i, op.sz)
        sum += op[i];
    if (sum % 2 != 0)
    {
        cout << sum << endl;
        return 0;
    }
    else if (sum != 0 && sum % 2 == 0 && on.sz == 0 && op.sz > 0)
    {
        sum -= op[op.sz - 1];
        cout << sum << endl;
        return 0;
    }
    ll sum2 = sum;
    if (op.sz != 0)
        sum2 -= op[op.sz - 1];
    if (on.sz != 0)
        sum += *max_element(on.begin(), on.end());
    if (sum2 % 2 == 0)
        cout << sum << endl;
    else
        cout << max(sum, sum2) << endl;
    return 0;
}