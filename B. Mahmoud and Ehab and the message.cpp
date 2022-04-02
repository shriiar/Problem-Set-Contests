#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define mp make_pair
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define vplb vector<pair<long long, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define iton (ll i = 0; i < n; i++)
#define seti set<int>
#define setl set<long long>
#define mapl map<long long, long long>
#define mapi map<int, int>
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int main()
{
    Fastio;
    ll n, k, m;
    cin >> n >> k >> m;
    vector <string> vs;
    map <string, long long> msl;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        vs.pb(s);
    }
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        msl[vs[i]] = x;
    }
    for(int i=0; i<k; i++)
    {
        ll x, s = 0, z = 1e18;
        cin >> x;
        int a[x];
        for(int j=0; j<x; j++)
        {
            ll y;
            cin >> y;
            a[s++] = y;
            z = min(z, msl[vs[a[j]-1]]);
        }
        for(int j=0; j<x; j++) msl[vs[a[j]-1]] = z;
    }
    ll res = 0;
    for(int i=0; i<m; i++)
    {
        string s;
        cin >> s;
        res += msl[s];
    }
    cout<<res<<endl;
    return 0;
}
