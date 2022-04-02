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
        int n, u, v;
        cin >> n >> u >> v;
        bool f = 0;
        vi t;
        for0(i, n)
        {
            int val;
            cin >> val;
            t.pb(val);
        }
        for0(i, n - 1)
        {
            if(abs(t[i] - t[i + 1]) > 1) 
            {
                f = 1;
                break;
            }
        }
        sort(t.begin(), t.end());
        t.erase(unique(t.begin(), t.end()), t.end());
        if(f) cout << 0 << endl;
        else if(!f && t.sz == 1) cout << v + min(u, v) << endl;
        else cout << min(u, v) << endl; 
    }
    return 0;
}