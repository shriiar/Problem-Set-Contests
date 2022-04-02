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
    while(t--)
    {
        ll n, mx = -1000000007, a1 = 0, a2 = 0, c1 = 0, c2 = 0, sum = 0;
        cin >> n;
        c2 += n;
        vl v;
        for0(i, n)
        {
            ll val;
            cin >> val;
            sum += val;
            v.pb(val);
        }
        sort(rall(v));
        for0(i, v.sz)
        {
            ll s = sum - v[i];
            c1++;
            sum -= v[i];
            c2--;
            a1 = s / c1;
            a2 = sum / c2;
            ll ans = a1 + a2;
            mx = max(ans, mx);
            cout<<mx<<endl;
        }
        cout<<mx<<endl;
        cout<<endl;
    }
    return 0;
}