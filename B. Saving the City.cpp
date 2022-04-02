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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ans1 = 0, ans2 = 0, id1 = -1, id2 = -1, cnt = 0;
        cin >> a >> b;
        string s;
        cin >> s;
        bool f = 0;
        for0(i, s.sz) { if (s[i] == '1') cnt++; }
        if (cnt == 1) { cout << a << endl; continue; }
        for0(i, s.sz)
        { if (s[i] == '1') f = 1; else if (f && s[i] == '0') { ans1 += a; f = 0; } }
        if (f) ans1 += a;
        for0(i, s.sz) { if (s[i] == '1') { id1 = i; break; } }
        for (int i = s.sz - 1; i >= 0; i--) { if (s[i] == '1') { id2 = i; break; } }
        f = 0;
        int id = id1, idd;
        for (int i = id1 + 1; i <= id2; i++)
        {
            if (!f && s[i] == '1')
            {
                int cnt1 = i - id - 1, cnt2 = 2 * a;
                cnt1 *= b;
                cnt1 += a;
                ans2 += min(cnt1, cnt2);
                f = 1;
                id = i;
            }
            else if (f && s[i] == '1')
            {
                int cnt1 = i - id - 1, cnt2 = a;
                cnt1 *= b;
                ans2 += min(cnt1, cnt2);
                id = i;
            }
        }
        cout << min(ans1, ans2) << endl;
    }
    return 0;
}