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
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        double n, mx = DBL_MIN, a1 = 0, a2 = 0, c1 = 0, c2 = 0, sum = 0, s = 0;
        cin >> n;
        c2 += n;
        vl v;
        for0(i, n)
        {
            double val;
            cin >> val;
            sum += val;
            v.pb(val);
        }
        sort(rall(v));
        for0(i, v.sz)
        {
            s += v[i];
            c1++;
            sum -= v[i];
            c2--;
            a1 = s / c1;
            ll s2 = sum;
            a2 = s2 / c2;
            double ans = double(a1 + a2);
            mx = max(mx, ans);
        }
        cout << setprecision(9) << fixed << double(mx) << endl;
    }
    return 0;
}