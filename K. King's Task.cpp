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
    int n, cnt = 1, len = 2000;
    cin >> n;
    vi v, s1, s2;
    bool f1 = 0, g1 = 0, ans = 0;
    for0(i, 2 * n)
    {
        int val;
        cin >> val;
        v.pb(val);
        s1.pb(val);
        s2.pb(val);
    }

    sort(all(v));

    if (v == s1 || v == s2)
    {
        cout << 0 << endl;
        return 0;
    }

    for0(i, 2 * n)
    {
        swap(s1[i], s1[i + 1]);
        i += 1;
    }
    for0(i, n) swap(s2[i], s2[n + i]);
    while (len--)
    {
        if (v == s1 || v == s2)
        {
            ans = 1;
            break;
        }
        if (!f1)
        {
            for0(i, n) swap(s1[i], s1[n + i]);
            f1 = 1;
        }
        else
        {
            for0(i, 2 * n)
            {
                swap(s1[i], s1[i + 1]);
                i += 1;
            }
            f1 = 0;
        }
        if (!g1)
        {
            for0(i, 2 * n)
            {
                swap(s2[i], s2[i + 1]);
                i += 1;
            }
            g1 = 1;
        }
        else
        {
            for0(i, n) swap(s2[i], s2[n + i]);
            g1 = 0;
        }
        cnt++;
    }
    if (ans) cout << cnt << endl;
    else cout << -1 << endl;
    return 0;
}