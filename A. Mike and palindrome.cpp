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
    string s;
    cin >> s;
    bool f = 1;
    int cnt = 0, len;
    if (s.sz % 2 == 0)
        len = s.sz / 2;
    else
    {
        len = s.sz / 2;
        len += 1;
    }
    for (int i = 0; i < len; i++)
    {
        if (s[i] != s[s.sz - 1 - i])
            cnt++;
    }
    if ((cnt == 1 || s.sz == 1) || (cnt == 0 && s.sz % 2 != 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}