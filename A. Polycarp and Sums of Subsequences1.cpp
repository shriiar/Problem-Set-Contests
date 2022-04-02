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
#define for1(i, n) for (ll i = 0; i <= n; i++)
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
    int t;
    cin >> t;
    while (t--)
    {
        vl v;
        for0(i, 7)
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
        // for0(i, 7) cout << v[i] << " ";
        // cout << endl;
        // sort(all(v));
        ll a, b, c, sum;
        sum = v[6];
        a = sum / 3;
        sum -= a;
        b = sum / 3;
        sum -= b;
        if (sum % 3 != 0)
            c = 1;
        c += sum / 3;
        if (v[5] == a + b)
            cout << c << " " << a << " " << b << endl;
        else if (v[5] == b + c)
            cout << a << " " << b << " " << c << endl;
        else if (v[5] == a + c)
            cout << b << " " << a << " " << c << endl;
    }
    return 0;
}