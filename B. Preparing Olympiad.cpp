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
#define vv vector <vector<ll>>
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
ll n, l, r, x, cnt = 0, indx = 0;
vi v;
vv pr(100000);
void subset(int pos, vector<ll> res)
{
    if(pos == n)
    {
        for(int i = 0; i < res.sz; i++) pr[indx].pb(res[i]);
        indx++;
        return;
    }
    res.pb(v[pos]);
    subset(pos + 1, res);
    res.pop_back();
    subset(pos + 1, res);
}
signed main()
{
    Fastio;
    cin >> n >> l >> r >> x;
    for0(i, n)
    {
        ll val;
        cin >> val;
        v.pb(val);
    }
    sort(all(v));
    if(n == 1)
    {
        cout << cnt << endl;
        return 0;
    }
    vl res;
    subset(0, res);
    for0(i, pr.sz)
    {
        if(pr[i].sz == 0) break;
        if(pr[i].sz == 1) continue;
        // cout << pr[i][0] << " " << pr[i][pr[i].sz - 1] << endl;
        ll sum = 0;
        if(abs(pr[i][0] - pr[i][pr[i].sz - 1]) >= x)
        {
            for0(j, pr[i].sz) sum += pr[i][j];
            if(sum >= l && sum <= r) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}