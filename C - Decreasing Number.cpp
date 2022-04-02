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
vi res;
int dec(int n, vector<int> &v)
{
    if(v[n] != -1) return v[n];
    if(n == 1) return 0;
    int ans = INT_MAX;
    for0(i, 3)
    {
        if(i == 0) ans = min(ans, 1 + dec(n - 1, v));
        if(i == 1 && n % 2 == 0) ans = min(ans, 1 + dec(n / 2, v));
        if(i == 2 && n % 3 == 0) ans = min(ans, 1 + dec(n / 3, v));
    }
    return v[n] = ans;
}
signed main()
{
    Fastio;
    int n;
    res.pb(1);
    res.pb(2);
    res.pb(3);
    while (cin >> n)
    {
        int cnt = 0;
        vi v(n + 1, -1);
        cout << dec(n, v) << endl;
    }
    return 0;
}