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
void stfunc(string &u, string &v, string &w, string &x, string &y, string &z, ll &mult, ll &rem)
{
    for (int i = 0; i < mult; i++)
    {
        u += 'R';
        u += 'G';
        u += 'B';
    }
    if (rem == 1 || rem == 2)
    {
        if (rem == 1)
            u += 'R';
        else
        {
            u += 'R';
            u += 'G';
        }
    }
    for (int i = 0; i < mult; i++)
    {
        v += 'R';
        v += 'B';
        v += 'G';
    }
    if (rem == 1 || rem == 2)
    {
        if (rem == 1)
            v += 'R';
        else
        {
            v += 'R';
            v += 'B';
        }
    }
    for (int i = 0; i < mult; i++)
    {
        w += 'B';
        w += 'R';
        w += 'G';
    }
    if (rem == 1 || rem == 2)
    {
        if (rem == 1)
            w += 'B';
        else
        {
            w += 'B';
            w += 'R';
        }
    }
    for (int i = 0; i < mult; i++)
    {
        x += 'B';
        x += 'G';
        x += 'R';
    }
    if (rem == 1 || rem == 2)
    {
        if (rem == 1)
            x += 'B';
        else
        {
            x += 'B';
            x += 'G';
        }
    }
    for (int i = 0; i < mult; i++)
    {
        y += 'G';
        y += 'R';
        y += 'B';
    }
    if (rem == 1 || rem == 2)
    {
        if (rem == 1)
            y += 'G';
        else
        {
            y += 'G';
            y += 'R';
        }
    }
    for (int i = 0; i < mult; i++)
    {
        z += 'G';
        z += 'B';
        z += 'R';
    }
    if (rem == 1 || rem == 2)
    {
        if (rem == 1)
            z += 'G';
        else
        {
            z += 'G';
            z += 'B';
        }
    }
}
int main()
{
    Fastio;
    ll n, rem, mult, mn = 1e9, cnt = 0;
    string s, u, v, w, x, y, z, res;
    cin >> n >> s;
    mult = n / 3;
    rem = n % 3;
    stfunc(u, v, w, x, y, z, mult, rem);
    for (int i = 0; i < n; i++)
    {
        if (s[i] != u[i])
            cnt++;
    }
    if (cnt < mn)
    {
        res = u;
        mn = cnt;
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != v[i])
            cnt++;
    }
    if (cnt < mn)
    {
        res = v;
        mn = cnt;
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != w[i])
            cnt++;
    }
    if (cnt < mn)
    {
        res = w;
        mn = cnt;
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != x[i])
            cnt++;
    }
    if (cnt < mn)
    {
        res = x;
        mn = cnt;
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != y[i])
            cnt++;
    }
    if (cnt < mn)
    {
        res = y;
        mn = cnt;
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != z[i])
            cnt++;
    }
    if (cnt < mn)
    {
        res = z;
        mn = cnt;
    }
    cout << mn << endl
         << res << endl;
    return 0;
}