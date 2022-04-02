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
    int n, mn = 1e7 + 3;
    cin >> n;
    vs v, res;
    for0(i, n)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    for0(i, v[0].sz)
    {
        string rep;
        for (int j = i; j < v[0].sz; j++)
            rep += v[0][j];
        for (int j = 0; j < i; j++)
            rep += v[0][j];
        res.pb(rep);
    }
    sort(all(res));
    for0(i, n)
    {
        bool f = binary_search(all(res), v[i]);
        if (!f)
        {
            cout <<-1 << endl;
            return 0;
        }
    }
    // for (auto it : res)
    //     cout << it << endl;
    // cout << endl;
    for0(i, res.sz)
    {
        int cnt = 0;
        for0(j, n)
        {
            if (res[i] == v[j])
                continue;
            else
            {
                for0(k, v[j].sz)
                {
                    string rep;
                    for (int l = k; l < v[j].sz; l++)
                        rep += v[j][l];
                    for (int l = 0; l < k; l++)
                        rep += v[j][l];
                    if (rep == res[i])
                        break;
                    cnt++;
                }
            }
        }
        mn = min(cnt, mn);
    }
    cout << mn << endl;
    return 0;
}