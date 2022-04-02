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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v;
        char ch = 'a';
        for1(i, 300)
            v.pb(((i * (i - 1)) / 2) + i);
        if (n == 1)
            cout << "a" << endl;
        else if (n == 2)
            cout << "ab" << endl;
        else
        {
            while (1)
            {
                if (n == 0)
                {
                    cout << endl;
                    break;
                }
                if (n == 1)
                {
                    cout << ch;
                    n -= 1;
                    continue;
                }
                auto it = lower_bound(all(v), n);
                int dis = it - v.begin();
                if (v[dis] == n)
                {
                    for0(i, dis + 1)
                            cout
                        << ch;
                    ch++;
                    n -= v[dis];
                    continue;
                }
                dis -= 1;
                for0(i, dis + 1)
                        cout
                    << ch;
                ch++;
                n -= v[dis];
            }
        }
    }
    return 0;
}