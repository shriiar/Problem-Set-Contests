#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod = 1e9 + 7
#define fr first
#define se second

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    string s, t, res, rep;
    bool f = 1;
    cin >> s >> t;
    res = s, rep = t;
    sort(all(res));
    sort(all(rep));
    if (res == rep)
    {
        cout << "array" << endl;
        return 0;
    }
    int indx = 0;
    for0(i, s.sz)
    {
        if (s[i] == t[indx])
            indx++;
    }
    if (indx == t.sz)
    {
        cout << "automaton" << endl;
        return 0;
    }
    vi v(26, 0), r(26, 0);
    for0(i, s.sz)
        v[s[i] - 'a']++;
    for0(i, t.sz)
        r[t[i] - 'a']++;
    for0(i, 26)
    {
        if ((r[i] != 0 && v[i] == 0) || (r[i] != 0 && v[i] != 0 && r[i] > v[i]))
        {
            f = 0;
            break;
        }
    }
    if (f)
        cout << "both" << endl;
    else
        cout << "need tree" << endl;
    return 0;
}