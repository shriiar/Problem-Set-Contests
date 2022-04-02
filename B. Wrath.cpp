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
    ll n, rng, rng2, ans = 1;
    cin >> n;
    rng = n - 1;
    vl v;
    for
        iton
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
    for (int i = n - 1; i > 0; i--)
    {
        if (i >= rng)
        {
            if (v[i] >= i)
            {
                rng = 0;
                break;
            }
            else
            {
                rng2 = i - v[i];
                if (rng2 < rng)
                    rng = rng2;
            }
        }
        else
        {
            ans++;
            if (v[i] >= i)
            {
                rng = 0;
                break;
            }
            else
            {
                rng2 = i - v[i];
                if (rng2 < rng)
                    rng = rng2;
            }
        }
    }
    if (rng != 0)
        ans++;
    cout << ans << endl;
    return 0;
}