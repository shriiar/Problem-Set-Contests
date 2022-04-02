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
#define pii pair<int, int>
#define pll pair<ll, ll>

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
#define unq(v) (v).erase(unique(all((v))), (v).end())

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    vector<bool> b(1000006 + 2, 1);
    b[0] = 0, b[1] = 0;
    vi v;
    for (int i = 2; i * i <= b.sz - 1; i++)
    {
        if (b[i] == 1)
        {
            for (int j = i * i; j <= b.sz - 1; j += i)
            {
                b[j] = 0;
            }
        }
    }
    for0(i, b.sz)
    {
        if (b[i])
            v.pb(i);
    }
    while (t--)
    {
        ll n;
        cin >> n;
        for0(i, v.sz)
        {
            if ((n - v[i] - 1) % v[i] != 0)
            {
                cout << v[i] << " " << n - v[i] - 1 << " " << 1 << endl;
                break;
            }
        }
    }
    return 0;
}