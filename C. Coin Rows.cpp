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
#define vv vector <vector<int>>
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
    int t;
    cin >> t;
    while(t--)
    {
        int m, sum1 = 0, sum2 = 0, mx, mn = INT_MAX, res, rep;
        cin >> m;
        vv v(3);
        for0(i, 2)
        {
            for0(j, m)
            {
                int val;
                cin >> val;
                v[i].pb(val);
                if(i == 0) sum1 += val;
                else sum2 += val;
            }
        }
        res = sum2;
        for0(i, m)
        {
            sum1 -= v[0][i];
            rep = res - sum2;
            sum2 -= v[1][i];
            mx = max(sum1, rep);
            mn = min(mn, mx);
        }
        cout << mn << endl;
    }
    return 0;
}