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
#define pii pair<int, int>
#define pll pair<ll, ll>

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
#define unq(v) (v).erase(unique(all((v))), (v).end())
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int dx1[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy1[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int dx2[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy2[8] = {1, 2, 2, 1, -1, -2, -2, -1};

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int n, cnt = 0, sum = 0;
    cin >> n;
    vi v;
    for0(i, n)
    {
        int val;
        cin >> val;
        v.pb(val);
        if (val == 0)
            cnt++;
    }
    vpi pr;
    if (cnt == n)
    {
        cout << "NO" << endl;
        return 0;
    }
    for0(i, n)
    {
        bool f = 0;
        cnt = 0;
        if (i == n - 1)
        {
            pr.pb(mp(n, n));
            break;
        }
        for (int j = i; j < n; j++)
        {
            // cout << i << " " << cnt << endl;
            if (v[j] != 0) cnt++;
            if (cnt > 1)
            {
                f = 1;
                pr.pb(mp(i + 1, j));
                i = j - 1;
                break;
            }
        }
        if (!f)
        {
            pr.pb(mp(i + 1, n));
            break;
        }
    }
    for0(i, pr.sz)
    {
        sum += (pr[i].se - pr[i].fr + 1);
        // cout << pr[i].fr << " " << pr[i].se << endl;
    }
    if (sum == n)
    {
        cout << "YES" << endl;
        cout << pr.sz << endl;
        for0(i, pr.sz) cout << pr[i].fr << " " << pr[i].se << endl;
    }
    else cout << "NO" << endl;
    return 0;
}