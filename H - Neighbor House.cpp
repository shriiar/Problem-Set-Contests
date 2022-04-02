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
#define vv vector<vector<ll>>
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
    for1(z, t)
    {
        ll n;
        cin >> n;
        vv res(n), v(n, vl(3, 0));
        for0(i, n)
        {
            for0(j, 3)
            {
                int val;
                cin >> val;
                res[i].pb(val);
            }
        }
        v[n - 1][0] += res[n - 1][0], v[n - 1][1] += res[n - 1][1], v[n - 1][2] += res[n - 1][2];
        for (int i = n - 2; i >= 0; i--)
        {
            v[i][0] += (res[i][0] + min(v[i + 1][1], v[i + 1][2]));
            v[i][1] += (res[i][1] + min(v[i + 1][0], v[i + 1][2]));
            v[i][2] += (res[i][2] + min(v[i + 1][0], v[i + 1][1]));
        }
        cout << "Case " << z << ": " << min(v[0][0], min(v[0][1], v[0][2])) << endl;
    }
    return 0;
}