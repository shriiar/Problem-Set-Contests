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
    // Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        string t;
        cin >> t;
        int q;
        cin >> q;
        while (q--)
        {
            string s;
            s = t;
            int n, pos, cnt = 0;
            cin >> n;
            pos = n - 1;
            char ch = s[n - 1];
            while (1)
            {
                bool f = 0;
                if ((ch - '0') > (s[pos - 1] - '0') && pos > 0)
                {
                    swap(s[pos], s[pos - 1]);
                    pos -= 1;
                    f = 1;
                    cnt++;
                }
                else if ((ch - '0') <= (s[pos + 1] - '0') && pos < s.sz - 1)
                {
                    swap(s[pos], s[pos + 1]);
                    pos += 1;
                    f = 1;
                    cnt++;
                }
                if (!f) break;
            }
            // cout << s << endl;
            cout << cnt << endl;
        }
    }
    return 0;
}