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
    int n, rng = 1, ans = 0;
    bool f = true;
    cin >> n;
    vpi u;
    vpi v;
    vpi p;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        u.pb(mp(val, i + 1));
    }
    v.pb(mp(-1, -1));
    v.pb(mp(u[0].first, u[0].second));
    u.erase(u.begin());
    sort(u.rbegin(), u.rend());
    for (int i = 0; i < u.sz; i++)
        v.pb(mp(u[i].first, u[i].second));
    for (int i = 1; i < n; i++)
    {
        if (i > rng)
        {
            f = false;
            break;
        }
        if (rng + v[i].first >= n)
        {
            int x = rng + 1, y = n;
            for (int j = x; j <= y; j++)
                p.pb(mp(v[i].second, v[j].second));
            break;
        }
        int x = rng + 1, y = rng + v[i].first;
        for (int j = x; j <= y; j++)
            p.pb(mp(v[i].second, v[j].second));
        rng += v[i].first;
    }
    if (f)
    {
        for (int i = 1; i <= n; i++)
            ans += v[i].first;
        if (ans < n - 1 || v[1].first == 0)
        {
            cout << -1 << endl;
            return 0;
        }
        cout << n - 1 << endl;
        for (int i = 0; i < p.sz; i++)
            cout << p[i].first << " " << p[i].second << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}