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
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vs v, res, rep;
        string ans;
        for0(i, n)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        for0(i, m)
        {
            string s;
            for0(j, n) s += (v[j][i]);
            sort(all(s));
            res.pb(s);
        }
        v.clear();
        for0(i, n - 1)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        for0(i, m)
        {
            string s;
            for0(j, n - 1) s += (v[j][i]);
            sort(all(s));
            rep.pb(s);
        }
        // for0(i, rep.sz) cout << rep[i] << endl;
        for0(i, m)
        {
            for0(j, n - 1)
            {
                auto it = lower_bound(all(res[i]), rep[i][j]);
                if(it != res[i].end())
                {
                    int dis = it - res[i].begin();
                    res[i].erase(res[i].begin() + dis);
                }
            }
            ans += res[i][0];
        }
        cout << ans << endl;
    }
    return 0;
}