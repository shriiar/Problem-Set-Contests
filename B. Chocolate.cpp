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
    ll n, res = 1;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val)
            v.pb(i);
    }
    if (v.sz == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    if (v.sz == 1)
    {
        cout << res << endl;
        return 0;
    }
    for (int i = 1; i < v.sz; i++)
        res = res * (v[i] - v[i - 1]);
    cout << res << endl;
    return 0;
}