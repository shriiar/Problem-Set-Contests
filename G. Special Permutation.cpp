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
        int n, res;
        cin >> n;
        if (n == 2 || n == 3)
        {
            cout << -1 << endl;
            continue;
        }
        res = n;
        vi o, e;
        for (int i = 2; i <= n; i += 2)
            e.pb(i);
        if (n % 2 == 0)
        {
            for (int i = n - 3; i >= 1; i -= 2)
            {
                o.pb(i);
                if (i == n - 3)
                    o.pb(n - 1);
            }
        }
        else
        {
            for (int i = n - 4; i >= 1; i -= 2)
            {
                if (i == n - 2)
                    continue;
                o.pb(i);
                if (i == n - 4)
                {
                    o.pb(n);
                    o.pb(n - 2);
                }
            }
        }
        for0(i, e.sz)
                cout
            << e[i] << " ";
        for0(i, o.sz)
                cout
            << o[i] << " ";
        cout << endl;
    }
}