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
#define pii pair<int, int>
#define pll pair<ll, ll>

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int n, m;
    cin >> n >> m;
    string s, t, x;
    cin >> s >> t;
    if (s == t)
    {
        cout << "YES" << endl;
        return 0;
    }
    bool st = 0;
    for0(i, n)
    {
        if (s[i] == '*') 
        {
            st = 1;
            continue;
        }
        x += s[i];
    }
    // cout << x << " " << t << endl;
    // cout << x.sz << " " << t.sz << endl;
    if (x == t)
    {
        cout << "YES" << endl;
        return 0;
    }
    if ((x.sz >= t.sz) || (x.sz < t.sz && !st))
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        bool f = 1;
        int p, q;
        for0(i, m)
        {
            if (s[i] == '*')
            {
                p = i;
                break;
            }
            else if (s[i] != t[i])
            {
                f = 0;
                break;
            }
        }
        if(!f)
        {
            cout << "NO" << endl;
            return 0;
        }
        for(int i = m - 1, j = n - 1; i >= 0; i--, j--)
        {
            if (s[j] == '*')
            {
                q = i;
                break;
            }
            else if (s[j] != t[i])
            {
                f = 0;
                break;
            }
        }
        if(!f)
        {
            cout << "NO" << endl;
            return 0;
        }
        else cout << "YES" << endl;
    }
    return 0;
}