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

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    string s, t;
    cin >> s >> t;
    ll ans = 0;
    vi z(t.sz, 0), o(t.sz, 0);
    for0(i, t.sz)
    {
        if(t[i] == '0') z[i]++;
        else o[i]++;
        if(i != 0)
        {
            z[i] += z[i - 1];
            o[i] += o[i - 1];
        }
    }
    for0(i, s.sz)
    {
        if(s[i] == '0')
        {
            ans += o[t.sz - s.sz + i];
            if(i != 0) ans -= o[i - 1];
        }
        else
        {
            ans += z[t.sz - s.sz + i];
            if(i != 0) ans -= z[i - 1];
        }
    }
    cout << ans << endl;
} 