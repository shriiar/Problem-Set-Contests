#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1000000007
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
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
vl res;
bool f;
bool count(ll n, ll pos)
{
    if (n == 0)
    {
        f = 1;
        return f;
    }
    if (n < 10) return f;
    if(pos >= res.sz) return f;
    if (pos == res.sz - 1)
    {
        if (n % 11 == 0)
            count(0, pos);
        return f;
    }
    for (int i = pos; i < res.sz; i++)
    {
        if (n - res[i] >= 0)
        {
            count(n - res[i], i);
            if (f) break;
        }
    }
    return f;
}
signed main()
{
    Fastio;
    int t;
    cin >> t;
    string s = "11";
    for (int i = 0; i < 8; i++)
    {
        ll dis = stoi(s);
        res.pb(dis);
        s += '1';
    }
    sort(rall(res));
    while (t--)
    {
        f = 0;
        ll n, pos = 0;
        cin >> n;
        if(count(n, pos)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}