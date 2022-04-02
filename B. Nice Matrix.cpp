#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define mp make_pair
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define vplb vector<pair<long long, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define iton (ll i = 0; i < n; i++)
#define seti set<int>
#define setl set<long long>
#define mapl map<long long, long long>
#define mapi map<int, int>
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
void swapp(ll &x, ll &y, ll &z)
{
    vl v;
    v.pb(x);
    v.pb(y);
    v.pb(z);
    sort(v.begin(), v.end());
    x = v[0], y = v[1], z = v[2];
    v.clear();
}
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, sum = 0;
        cin >> n >> m;
        ll a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll val;
                cin >> val;
                a[i][j] = val;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll x = a[i][j], y = a[i][m - 1 - j], z = a[n - 1 - i][j];
                swapp(x, y, z);
                sum += (y - x);
                sum += (z - y);
                a[i][j] = y, a[i][m - 1 - j] = y, a[n - 1 - i][j] = y;
            }
        }
        cout << sum << endl;
    }
}