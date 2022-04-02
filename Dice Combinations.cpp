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
#define vv vector <vector<int>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vl v, res;
ll cnt = 0;
ll count(ll n)
{
    if(v[n] != -1)  return v[n];
    if(n == 0) return 1;
    int ans = 0;
    for(int i = 0; i < res.sz; i++)
    {
        if(n - res[i] >= 0)
        {
            ans += count(n - res[i]);
            ans %= mod;
        }
    }
    return v[n] = ans % mod;
}
signed main()
{
    Fastio;
    ll n;
    cin >> n;
    v.resize(n + 1, -1);
    for1(i, 6) res.pb(i);
    cout << count(n) << endl;
    return 0;
}