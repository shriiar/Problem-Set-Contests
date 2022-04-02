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
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int n, k, q;
    cin >> n >> q >> k;
    vi v, sum(n, 0);
    for0(i, n)
    {
        int val;
        cin >> val;
        v.pb(val);
    }
    if (n == 1)
    {
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << k - 1 << endl;
        }
        return 0;
    }
    sum[0] = v[1] - v[0] - 1;
    for1(i, n - 2)  sum[i] = v[i + 1] - v[i - 1] - 2;
    sum[n - 1] = v[n - 1] - v[n - 2] - 1;
    for1(i, n - 1) sum[i] += sum[i - 1];
    while (q--)
    {
        int l, r, ans = 0;
        cin >> l >> r;
        int c = 0;
        l -= 1, r -= 1;
        if(l > 0)
        {
            ans += sum[r] - sum[l - 1];
            ans += v[l - 1];
        }
        else
        {
            ans += sum[r];
            ans += v[l] - 1;
        }
        if(r < n - 1) ans += k - v[r + 1] + 1;
        else ans += k - v[r];
        cout << ans << endl;
    }
    return 0;
}