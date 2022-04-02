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
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, indx = 0;
        cin >> n;
        vl v, res;
        vvl pr(n + 1);
        for0(i, n)
        {
            ll val;
            cin >> val;
            v.pb(val);
            res.pb(val);
        }
        // for0(i, n) cout << v[i] << " ";
        // cout << endl;
        sort(all(res));
        for0(i, n)
        {
            // cout << "gg" << endl;
            if (v[i] == res[i])
                continue;
            // cout << v[i] << " " << res[i] << endl;
            vl rep;
            rep.pb(res[i]);
            int l = i + 1, r;
            for (int j = i; j < n; j++)
            {
                if (v[j] == res[i])
                {
                    r = j + 1;
                    break;
                }
                else rep.pb(v[j]);
            }
            // for0(j, rep.sz) cout << rep[j] << " ";
            // cout << endl; 
            if (r - l > 0)
            {
                pr[indx].pb(l);
                pr[indx].pb(r);
                pr[indx].pb(r - l);
                indx++;
            }
            v.clear();
            for (int j = 0; j < i; j++)
                v.pb(res[j]);
            for (int j = 0; j < rep.sz; j++)
                v.pb(rep[j]);
            // for0(i, v.sz) cout << v[i] << " ";
            // cout << endl;
        }
        cout << indx << endl;
        for0(i, pr.sz)
        {
            if (pr[i].sz == 0)
                break;
            for0(j, pr[i].sz) cout << pr[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}