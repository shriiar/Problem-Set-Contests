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
        ll n;
        cin >> n;
        vl v;
        bool f = 0, h = 1;
        for0(i, n)
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
        for0(i, n)
        {
            f = 0;
            for(int j = 2; j <= i + 2; j++)
            {
                if(v[i] % j != 0)
                {
                    f = 1;
                    break;
                }
            }
            if(!f) 
            {
                h = 0;
                break;
            }
        }
        if(!h) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}