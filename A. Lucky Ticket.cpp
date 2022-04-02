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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int s1 = 0, s2 = 0;
    bool f = 1;
    for0(i, s.sz)
    {
        if (s[i] == '4' || s[i] == '7')
            continue;
        else
        {
            f = 0;
            break;
        }
    }
    if (f)
    {
        for (int i = 0; i < s.sz / 2; i++)
            s1 += s[i] - '0';
        for (int i = s.sz / 2; i < s.sz; i++)
            s2 += s[i] - '0';
        if (s1 != s2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}