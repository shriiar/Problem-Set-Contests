#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1e9+7
#define fr first
#define se second

#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vv vector <vector<int>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int n, m, cnt, rep;
    cin >> n >> m;
    cnt = n, rep = n;
    vv v(n + 1);
    for0(i, m)
    {
        int x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    bool f = 1;
    for1(i, n)
    {
        if (v[i].sz == 0)
            continue;
        auto it = lower_bound(all(v[i]), i);
        int idx = it - v[i].begin();
        if (idx == 0)
        {
            cnt--;
            for (int j = i + 1; j <= n; j++)
            {
                bool f = binary_search(all(v[j]), i);
                if (f)
                {
                    it = lower_bound(all(v[j]), i);
                    int dis = it - v[j].end();
                    v[j].erase(v[j].begin() + dis);
                }
            }
        }
    }
    // cout << cnt << endl;
    vv pr;
    int p, q;
    cin >> p;
    while (p--)
    {
        int q;
        cin >> q;
        if (q == 3)
            cout << cnt << endl;
        else
        {
            int w, x, y;
            cin >> w >> x >> y;
            pr[x].pb(y);
            pr[y].pb(x);
        }
    }
    if (p >= 2)
    {
        for1(i, n)
        {
            if (pr[i].sz == 0)
                continue;
            auto it = lower_bound(all(pr[i]), i);
            int idx = it - pr[i].begin();
            if (idx == 0)
            {
                rep--;
                for (int j = i + 1; j <= n; j++)
                {
                    bool f = binary_search(all(pr[j]), i);
                    if (f)
                    {
                        it = lower_bound(all(pr[j]), i);
                        int dis = it - pr[j].end();
                        pr[j].erase(pr[j].begin() + dis);
                    }
                }
            }
        }
        cout << cnt << endl
             << rep << endl;
    }
    else
        cout << cnt << endl;
}