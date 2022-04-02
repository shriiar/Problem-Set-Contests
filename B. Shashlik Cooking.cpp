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
    int n, k, mx = INT_MAX, indx = 0;
    cin >> n >> k;
    if (n <= k)
    {
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    if(k == 0)
    {
        cout << n << endl;
        for1(i, n) cout << i << " ";
        cout << endl;
        return 0;
    }
    vv v(1000 + 10);
    for (int i = n; i >= n - k; i--)
    {
        vi res;
        bool f = 1;
        for (int j = i; j >= 1; j--)
        {
            res.pb(j);
            if(j - k <= 1) break;
            if(((j - k) - k) <= 1)
            {
                f = 0;
                break;
            }
            else j -= (k * 2);
        }
        if (f)
        {
            for (int j = res.sz - 1; j >= 0; j--) v[indx].pb(res[j]);
            indx++;
        }
    }
    for (int i = 0; i < v.sz; i++)
    {
        if (v[i].sz == 0) break;
        if (v[i].sz <= mx)
        {
            mx = v[i].sz;
            indx = i;
        }
    }
    cout << mx << endl;
    for (int i = 0; i < v[indx].sz; i++) cout << v[indx][i] << " ";
    cout << endl;
    return 0;
}