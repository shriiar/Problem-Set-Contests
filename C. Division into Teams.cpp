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
    int n, sum1 = 0, sum2 = 0, mx = -1;
    cin >> n;
    vpi v;
    for0(i, n)
    {
        int val;
        cin >> val;
        mx = max(val, mx);
        v.pb(mp(val, i + 1));
    }
    sort(rall(v));
    vi t1, t2;
    bool f = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (f)
        {
            sum1 += v[i].fr;
            t1.pb(v[i].se);
            f = 0;
        }
        else
        {
            sum2 += v[i].fr;
            t2.pb(v[i].se);
            f = 1;
        }
    }
    cout << t1.sz << endl;
    sort(all(t1));
    for0(i, t1.sz)
            cout
        << t1[i] << " ";
    cout << endl;

    cout << t2.sz << endl;
    sort(all(t2));
    for0(i, t2.sz)
            cout
        << t2[i] << " ";
    cout << endl;
    return 0;
}