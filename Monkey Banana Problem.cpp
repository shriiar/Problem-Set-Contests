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
#define vv vector<vector<ll>>
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
    for1(z, t)
    {
        int n, cnt = 1;
        cin >> n;
        vv res(n * 2 - 1);
        for0(i, n * 2 - 1)
        {
            for0(j, cnt)
            {
                ll val;
                cin >> val;
                res[i].pb(val);
            }
            if (i < n - 1)
                cnt++;
            else
                cnt--;
        }
        res[res.sz - 2][0] += res[res.sz - 1][0], res[res.sz - 2][1] += res[res.sz - 1][0];
        for (int i = res.sz - 2; i >= n; i--)
        {
            for0(j, res[i].sz)
            {
                if (j == 0)
                {
                    res[i - 1][j] += res[i][j];
                    res[i - 1][j + 1] += res[i][j];
                    continue;
                }
                ll dis = res[i - 1][j];
                res[i - 1][j] -= res[i][j - 1];
                res[i - 1][j] += res[i][j];
                res[i - 1][j] = max(res[i - 1][j], dis);
                res[i - 1][j + 1] += res[i][j];
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for0(j, res[i].sz)           {
                res[i][j] += max(res[i + 1][j], res[i + 1][j + 1]);
            }
        }
        cout << "Case " << z << ": " << res[0][0] << endl;
    }
    return 0;
}