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
signed main()
{
    Fastio;
    ll n, k;
    cin >> n >> k;
    vl v(n, 0), res;
    for0(i, n)
    {
        ll val;
        cin >> val;
        res.pb(val);
    }
    v[n - 2] += abs(res[n - 2] - res[n - 1]);
    for(int i = n - 2; i >= 0; i--)
    {
        ll mn = abs(res[i] - res[i + 1]) + v[i + 1];
        for(int j = i + 2, cnt = 0; cnt < k - 1 && j < res.sz; j++, cnt++)
        {
            mn = min(mn, abs(res[i] - res[j]) + v[j]);
        }
        v[i] = mn;
    }
    cout << v[0] << endl;
    return 0;
}