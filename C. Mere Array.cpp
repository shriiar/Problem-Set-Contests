#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, mn;
        bool f = true;
        cin >> n;
        vl v;
        vl res;
        vl srt;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            v.pb(val);
            srt.pb(val);
        }
        sort(srt.begin(), srt.end());
        mn = srt[0];
        for (int i = 0; i < n; i++)
        {
            if (srt[i] != v[i])
                res.pb(v[i]);
        }
        sort(res.begin(), res.end());
        if (res.sz > 1)
        {
            for (int i = 0; i < res.sz; i++)
            {
                if (__gcd(res[i], mn) != mn)
                {
                    f = false;
                    break;
                }
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}