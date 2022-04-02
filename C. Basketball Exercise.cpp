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

#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vvi vector <vector<int>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int n;
    cin >> n;
    vl v, t;
    vvl dp(2, vl(n, 0));
    for0(i, n)
    {
        ll val;
        cin >> val;
        v.pb(val);
    }
    for0(i, n)
    {
        ll val;
        cin >> val;
        t.pb(val);
    }
    dp[0][0] = v[0];
    dp[1][0] = t[0];
    for1(i, n - 1)
    {
        dp[0][i] = max(dp[1][i - 1] + v[i], dp[0][i - 1]);
        dp[1][i] = max(dp[0][i - 1] + t[i], dp[1][i - 1]);
    }
    cout << max(dp[0][n - 1], dp[1][n - 1]) << endl;
    return 0;
}