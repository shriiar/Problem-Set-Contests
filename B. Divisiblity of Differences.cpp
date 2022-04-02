#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define mp make_pair
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define vplb vector<pair<long long, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define iton (ll i = 0; i < n; i++)
#define seti set<int>
#define setl set<long long>
#define mapl map<long long, long long>
#define mapi map<int, int>
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int main()
{
    Fastio;
    int n, k, m;
    cin >> n >> k >> m;
    bool f = 0;
    vpl r;
    vi ans, v, rem, vr;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        r.pb(mp(abs(val - m), val));
    }
    sort(r.begin(), r.end());
    for (int i = 0; i < n; i++)
    {
        rem.pb(r[i].first);
        v.pb(r[i].second);
        vr.pb(r[i].second);
    }
    for (int i = 0; i < rem.sz - 1; i++)
    {
        ll res = abs(rem[i] - m);
        while (1)
        {
            auto it = lower_bound(rem.begin(), rem.end(), res);
            if (it != rem.end())
            {
                int dis = it - rem.begin();
                if (rem[dis] != res)
                    break;
                ans.pb(vr[dis]);
                vr.erase(vr.begin() + dis);
                rem.erase(rem.begin() + dis);
                f = 1;
            }
            else
                break;
        }
        if (f)
        {
            f = 0;
            bool g = binary_search(vr.begin(), vr.end(), v[i]);
            if (g)
                ans.pb(v[i]);
        }
    }
    // if (ans.sz >= k)
    {
        cout << "Yes" << endl;
        for (int i = 0; i < ans.sz; i++)
            cout << ans[i] << " ";
        cout << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}