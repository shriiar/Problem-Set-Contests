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
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> b(n + 1, vl(m + 1, 0));
    b[0][0] = 1;
    for0(i, n)
    {
        string s;
        cin >> s;
        for0(j, m)
        {
            if (s[j] == '.')
            {
                if (i > 0)
                {
                    b[i][j] += b[i - 1][j];
                    b[i][j] %= mod;
                }
                if (j > 0)
                {
                    b[i][j] += b[i][j - 1];
                    b[i][j] %= mod;
                }
            }
        }
    }
    cout << b[n - 1][m - 1] << endl;
    return 0;
}