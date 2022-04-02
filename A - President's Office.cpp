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
#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vvi vector <vector<int>>
#define vvb vector <vector<bool>>
#define vvc vector <vector<char>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>
#define for0(i, n) for (ll i=0;i<n;i++)
#define for1(i, n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define unq(v) (v).erase(unique(all((v))), (v).end())
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int n, m;
    char ch;
    cin >> n >> m >> ch;
    vvc v(n + 1);
    vvb b(n + 1);
    vector<char> res;
    for0(i, n)
    {
        for0(j, m)
        {
            char val;
            cin >> val;
            v[i].pb(val);
            b[i].pb(0);
        }
    }
    for0(i, n)
    {
        for0(j, m)
        {
            if(v[i][j] == ch)
            {
                bool f = 0;
                if(i - 1 >= 0 && v[i - 1][j] != '.' && v[i - 1][j] != ch && !b[i - 1][j]) res.pb(v[i - 1][j]);
                if(i + 1 < n && v[i + 1][j] != '.' && v[i + 1][j] != ch) res.pb(v[i + 1][j]);
                if(j - 1 >= 0 && v[i][j - 1] != '.' && v[i][j - 1] != ch) res.pb(v[i][j - 1]);
                if(j + 1 < m && v[i][j + 1] != '.' && v[i][j + 1] != ch) res.pb(v[i][j + 1]);
            }
        }
    }
    sort(all(res));
    unq(res);
    cout << res.sz << endl;
    return 0;
}
