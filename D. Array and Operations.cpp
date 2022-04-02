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
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;
        vi t, res, v;
        for0(i, n)
        {
            int val;
            cin >> val;
            t.pb(val);
        }
        sort(all(t));
        for0(i, n)
        {
            if(i < n - k) res.pb(t[i]);
            else v.pb(t[i]);
        }
        // for(auto i : res) cout << i << " ";
        // cout << endl;
        // for0(i, v.sz) cout << v[i] << " ";
        // cout << endl;
        for(int i = v.sz - 1; i >= 0; i--)
        {
            // cout << res[res.sz - 1] << " " << v[i] << " " << res[res.sz - 1] / v[i] << endl;
            ans += (res[res.sz - 1] / v[i]);
            res.erase(res.begin() + res.sz - 1);
        }
        for0(i, res.sz) ans += res[i];
        cout << ans << endl;
    }
    return 0;
}