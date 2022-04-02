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
        ll n, x, t, ans, res, indx, rep;
        cin >> n >> x >> t;
        res = (n * x) - x;
        if (res <= t)
        {
            n -= 1;
            cout << (n * (n + 1)) / 2 << endl;
            continue;
        }
        if (t % x == 0)
        {
            ll dis = res - t;
            indx = n - (dis / x) - 1;
        }
        else
        {
            indx = t % x;
            indx = t - indx;
            indx /= x;
        }
        ll mem = n - indx;
        rep = (n - indx) * indx;
        rep -= indx;
        n -= mem;
        ans = rep + ((n * (n + 1)) / 2);
        cout << ans << endl;
    }
}