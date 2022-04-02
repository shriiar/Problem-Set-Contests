#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
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
    int n, x, y;
    cin >> n;
    vi v, pr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.pb(val);
        pr.pb(val);
    }
    sort(v.begin(), v.end());
    sort(pr.begin(), pr.end());
    x = v[n - 1];
    for (int i = 0; i < v.sz; i++)
    {
        if (x % v[i] == 0)
        {
            v.erase(v.begin() + i);
            i -= 1;
        }
    }
    if (v.sz != 0)
        y = v[v.sz - 1];
    else
    {
        vi res(1e4 + 3, 0);
        for (int i = 0; i < n; i++)
            res[pr[i]]++;
        int maxx = 0;
        for (int i = 1; i <= 1e4; i++)
        {
            if (res[i] >= maxx)
            {
                maxx = res[i];
                y = i;
            }
        }
    }
    cout << x << " " << y << endl;
    return 0;
}