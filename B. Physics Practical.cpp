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
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, indx, mult, idx1, idx2;
    int mn = 1e7, res;
    cin >> n;
    vi v;
    for0(i, n)
    {
        int val;
        cin >> val;
        v.pb(val);
    }
    sort(all(v));
    for0(i, n - 1)
    {
        mult = v[i] * 2;
        auto it = upper_bound(all(v), mult);
        if (it == v.end())
        {
            res = i;
            mn = min(res, mn);
            continue;
        }
        indx = it - v.begin();
        res = i + (v.sz - indx);
        mn = min(res, mn);
    }
    cout << mn << endl;
    return 0;
}