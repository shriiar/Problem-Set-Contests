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
int dx[]= {-1, 0, 0, 1};
int dy[]= {0, -1, 1, 0};
int dx1[]= {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy1[]= {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int dx2[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy2[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
 
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {   
        ll a, b, x, y, p, q, s;
        cin >> a >> b >> x >> y >> p >> q >> s;
        ll res = p, rep = 0;
        bool f = 0;
        if(p == 1)
        {
            ll c = a + (1 * s), d = b + (0 * q);
 
            ll u = c / y, v = x / d;
            if(c % y != 0) u++;
            if(x % d != 0) v++;
 
            if(u >= v) f = 1;
 
            c = a + (0 * s), d = b + (1 * q);
 
            u = c / y, v = x / d;
            if(c % y != 0) u++;
            if(x % d != 0) v++;
 
            if(u >= v) f = 1;
 
            if(f) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        res = p, rep = 0;
        vector<pair<ll, ll>> pr;
        for0(i, p + 1)
        {
            pr.pb(mp(res, rep));
            res--;
            rep++;
        }
        // for0(i, pr.sz) cout << pr[i].fr << " " << pr[i].se << endl;
        ll l = 0, r = p;
        while(1)
        {
            ll m = (l + r) / 2;
            if(l + 1 == r) break;
            res = pr[m].fr, rep = pr[m].se;
            ll c = a + (res * s), d = b + (rep * q);
 
            ll u = c / y, v = x / d;
            if(c % y != 0) u++;
            if(x % d != 0) v++;
 
            if(u >= v)
            {
                f = 1;
                break;
            }
            else r = m;
        }
        l = 0, r = p;
        while(1)
        {
            ll m = (l + r) / 2;
            if(l + 1 == r) break;
            res = pr[m].fr, rep = pr[m].se;
            ll c = a + (res * s), d = b + (rep * q);
 
            ll u = c / y, v = x / d;
            if(c % y != 0) u++;
            if(x % d != 0) v++;
 
            if(u >= v)
            {
                f = 1;
                break;
            }
            else l = m;
        }
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}