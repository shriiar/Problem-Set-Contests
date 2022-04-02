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
    int n, cnt = 0, indx = 0;
    cin >> n;
    vi res(n + 1), v(n + 1, 0), rep(n + 1, 0), ans(n + 1, 0);
    for1(i, n) cin >> res[i];
    v[2] += abs(res[2] - res[1]);
    rep[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        int id1 = v[i - 1] + abs(res[i] - res[i - 1]), id2 = v[i - 2] + 3 * abs(res[i] - res[i - 2]);
        if (id1 < id2)
        {
            v[i] = id1;
            rep[i] = i - 1;
        }
        else
        {
            v[i] = id2;
            rep[i] = i - 2;
        }
    }
    for (int i = n; i > 0; i = rep[i])
    {
        cnt++;
        ans[indx++] = i;
    }
    indx -= 1;
    cout << v[n] << endl << cnt << endl;
    for (int i = indx; i >= 0; i--) cout << ans[i] << " ";
    cout << endl;
    return 0;
}