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
        int n, cnt = 0;
        cin >> n;
        vs v;
        for0(i, n)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        sort(all(v));
        for0(i, n)
        {
            if (v[i].sz == 1)
                continue;
            string x, y;
            x += v[i][0];
            for (int j = 1; j < v[i].sz; j++) y += v[i][j];
            bool f = binary_search(all(v), x);
            bool g = binary_search(all(v), y);
            if (f && g) 
            {
                cnt++;
                continue;
            }
            for (int j = 1; j < v[i].sz; j++)
            {
                f = 0, g = 0;
                x += v[i][j];
                y.erase(y.begin() + 0);
                f = binary_search(all(v), x);
                g = binary_search(all(v), y);
                if (f && g) 
                {
                    cnt++;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}