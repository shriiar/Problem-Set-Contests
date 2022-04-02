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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for0(i, n) for0(j, m) a[i][j] = 0;
        for (int i = 0; i < m; i += 2)
            a[0][i] = 1;
        for (int i = 2; i < n - 2; i += 2)
        {
            a[i][0] = 1;
            a[i][m - 1] = 1;
        }
        for (int i = 0; i < m; i += 2)
            a[n - 1][i] = 1;
        for0(i, n)
        {
            for0(j, m) cout << a[i][j];
            cout << endl;
        }
        cout << endl;
    }
}