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
        ll n, m, a, d, sum = 0, x, y;
        cin >> n >> m >> a >> d;
        x = (--n), y = m;
        vl v;
        for0(i, 5) v.pb(a + (i * d));
        for(ll msk = 1; msk < pow(2, v.sz); msk++)
        {
            ll cnt = 0, mult = 1;
            for0(i, v.sz)
            {
                if(msk & (1 << i))
                {
                    cnt++;
                    mult = __lcm(mult, v[i]);
                }
            }
            if(cnt % 2 != 0)
            {
                n -= (x / mult);
                m -= (y / mult);
            }
            else
            {
                n += (x / mult);
                m += (y / mult);
            }
        }
        cout << m - n << endl;
    }
    return 0;
}