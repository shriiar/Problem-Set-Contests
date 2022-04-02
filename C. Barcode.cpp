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
int n, m, a, b;
vi w, b;
signed main()
{
    Fastio;
    int s1 = 0, s2 = 0;
    cin >> n >> m >> a >> b;
    vs v;
    w.resize(m, 0);
    b.resize(m, 0);
    for0(i, n)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    vpi pr;
    for0(i, m)
    {
        int cnt1 = 0, cnt2 = 0;
        for0(j, n)
        {
            if(v[j][i] == '#') cnt1++;
            else cnt2++;
        }
        pr.pb(mp(cnt1, cnt2));
    }
    vi w(m, 0), b(m, 0);
    for(int i = m - 1; i >= 0; i--)
    {
        s1 += pr[i].fr;
        s2 += pr[i].se;
        w.pb(s1);
        b.pb(s2);
    }
    return 0;
}