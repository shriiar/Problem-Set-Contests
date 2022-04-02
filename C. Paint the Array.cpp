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
        ll n, p, q;
        cin >> n;
        vl v, x, y;
        for0(i, n)
        {
            ll val;
            cin >> val;
            v.pb(val);
            if(i % 2) x.pb(val);
            else y.pb(val);
        }
        // for(auto i : x) cout << i << " ";
        // cout << endl;
        // for(auto i : y) cout << i << " ";
        // cout << endl;
        p = x[0], q = y[0];
        for1(i, x.sz - 1) p = __gcd(x[i], p);
        for1(i, y.sz - 1) q = __gcd(y[i], q);
        bool f = 1, g = 1;
        // cout << p << " " << q << endl;
        for0(i, n - 1)
        {
            if(i % 2 == 0)
            {
                if(v[i] % p != 0 && v[i + 1] % p == 0) continue;
                else 
                {
                    f = 0;
                    break;
                }
            }
            else
            {
                if(v[i] % p == 0 && v[i + 1] % p != 0) continue;
                else 
                {
                    f = 0;
                    break;
                }
            }
        }
        for0(i, n - 1)
        {
            if(i % 2 == 0)
            {
                if(v[i] % q == 0 && v[i + 1] % q != 0) continue;
                else 
                {
                    g = 0;
                    break;
                }
            }
            else
            {
                if(v[i] % q != 0 && v[i + 1] % q == 0) continue;
                else 
                {
                    g = 0;
                    break;
                }
            }
        }
        // cout << f << " " << p << endl << g << " " << q << endl;
        if(f && p == 1) f = 0;
        if(g && q == 1) g = 0;
        if(!f && !g) cout << 0 << endl;
        else if(f) cout << p << endl;
        else if(g) cout << q << endl;
    }
    return 0;
}