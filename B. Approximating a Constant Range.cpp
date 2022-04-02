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
    int n, indx = 1, cnt;
    cin >> n;
    vi v;
    bool f = 1;
    vector<pair<pair<int, int>, int>> pr;
    for0(i, n)
    {
        int val;
        cin >> val;
        v.pb(val);
    }
    pr.pb(mp(mp(v[v.sz - 1], v[v.sz - 1]), 1));
    int mn = v[v.sz - 1], mx = v[v.sz - 2];
    if(mn > mx) swap(mn, mx);
    pr.pb(mp(mp(mn, mx), 2));
    for(int i = n - 3; i >= 0; i--)
    {
        if(abs(v[i] - pr[indx].fr.fr) <= 1 && abs(v[i] - pr[indx].fr.se) <= 1)
        {
            mn = pr[indx].fr.fr, mx = pr[indx].fr.se, cnt = pr[indx].se;
            vi res;
            res.pb(mn), res.pb(mx), res.pb(v[i]);
            sort(all(res));
            mn = res[0], mx = res[res.sz - 1];
            cnt += 1;
            indx++;
            pr.pb(mp(mp(mn, mx), cnt));
        }
        else
        {
            vi res;
            res.pb(v[i]);
            for(int j = i + 1; j < n; j++)
            {
                if(abs(v[j] - v[i]) <= 1 && abs(v[j] - v[i + 1]) <= 1) res.pb(v[j]);
                else break;
            }
            sort(all(res));
            mn = res[0], mx = res[res.sz - 1];
            pr.pb(mp(mp(mn, mx), res.sz));
            indx++;
        }
    }
    mx = -1;
    for0(i, pr.sz) mx = max(mx, pr[i].se);
    cout << mx << endl;
    return 0;
}