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

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, diff, rsum = 0, cnt = 0;
        cin >> n;
        vpi res, t1, t2;
        for0(i, n)
        {
            int val;
            cin >> val;
            if(val != 0) res.pb(mp(val, i + 1));
        }
        sort(all(res));
        for0(i, res.sz)
        {
            sum += res[i].fr;
            if(i == res.sz - 1) t1.pb(mp(res[i].fr, res[i].se));
            else t2.pb(mp(res[i].fr, res[i].se));
        }
        rsum += t1[t1.sz - 1].fr;
        sum -= rsum;
        diff = abs(sum - rsum);
        for(int i = 0 ; i < t2.sz;)
        {
            ll mx = rsum + t2[i].fr, ms = sum - t2[i].fr, mn = abs(ms - mx);
            // cout << mn << " " << diff << endl;
            if (mn > diff) break;
            else
            {
                rsum += t2[i].fr;
                sum -= t2[i].fr;
                diff = sum - rsum;
                t1.pb(mp(t2[i].fr, t2[i].se));
                t2.erase(t2.begin() + 0);
            }
        }
        // for (int i = 0; i <= indx; i++) t1.pb(mp(v[i].fr, v[i].se));
        // t1.pb(mp(v[v.sz - 1].fr, v[v.sz - 1].se));
        // for (int i = indx + 1; i < v.sz - 1; i++) t2.pb(mp(v[i].fr, v[i].se));
        sort(all(t2));
        sort(rall(t1));

        // for0(i, t1.sz) cout << t1[i].fr << " ";
        // cout << endl;

        // for0(i, t2.sz) cout << t2[i].fr << " ";
        // cout << endl;

        // cout << endl;
        ll indx1 = 0, indx2 = 0;
        ll w = 0, z = 0;
        while (1)
        {
            if (indx1 == t1.sz || indx2 == t2.sz) break;
            ll x, y;
            if (w == 0)
            {
                x = t1[indx1].se;
                w = t1[indx1].fr;
            }
            if (z == 0)
            {
                y = t2[indx2].se;
                z = t2[indx2].fr;
            }
            while (1)
            {
                if (w == 0 || z == 0) break;
                w--;
                z--;
                cnt++;
            }
            if (w == 0) indx1++;
            if (z == 0) indx2++;
        }
        cout << cnt << endl;
        indx1 = 0, indx2 = 0;
        w = 0, z = 0;
        while (1)
        {
            if (indx1 == t1.sz || indx2 == t2.sz) break;
            ll x, y;
            if (w == 0)
            {
                x = t1[indx1].se;
                w = t1[indx1].fr;
            }
            if (z == 0)
            {
                y = t2[indx2].se;
                z = t2[indx2].fr;
            }
            while (1)
            {
                if (w == 0 || z == 0) break;
                cout << x << " " << y << endl;
                w--;
                z--;
            }
            if (w == 0) indx1++;
            if (z == 0) indx2++;
        }
    }
    return 0;
}