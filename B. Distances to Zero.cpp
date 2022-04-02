#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define vli vector<long long int>
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
    int n, ix = 0;
    cin >> n;
    vi v;
    vi ind;
    vi ans;
    for (int i = 0; i < n; i++)
    {
        li x;
        cin >> x;
        if (x == 0)
        {
            ind.pb(i);
            v.pb(0);
        }
        else
            v.pb(i);
    }
    for (int i = 0; i < ind[ix]; i++)
        ans.pb(abs(ind[ix] - v[i]));
    if (ind.sz >= 2)
    {
        int x = ind[ix], y = ind[ix + 1];
        for (int i = x; i < ind[ind.sz - 1]; i++)
        {
            if (v[i] == 0)
            {
                ans.pb(0);
                x = i;
                if (x == y && x < ind[ind.sz - 1])
                {
                    ix++;
                    y = ind[ix + 1];
                }
            }
            else if (v[i] > x && v[i] < y)
            {
                int diff = min(abs(v[i] - x), (abs(v[i] - y)));
                ans.pb(diff);
            }
            else if (v[i] > y)
            {
                ix++;
                x = ind[ix], y = ind[ix + 1];
                int diff = min(abs(v[i] - x), (abs(v[i] - y)));
                ans.pb(diff);
            }
        }
    }
    ans.pb(0);
    for (int i = ind[ind.sz - 1] + 1; i < n; i++)
        ans.pb(abs(ind[ind.sz - 1] - v[i]));
    for (int i = 0; i < ans.sz; i++)
        cout << ans[i] << " ";
    cout << endl;
}