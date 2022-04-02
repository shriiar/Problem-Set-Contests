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
    int n, m;
    cin >> n >> m;
    mapl mapp;
    vl v1, v2, v3;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        v1.pb(val);
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < m; i++)
    {
        ll val;
        cin >> val;
        v2.pb(val);
        v3.pb(val);
    }
    sort(v2.begin(), v2.end());
    for (int i = 0; i < m; i++)
    {
        ll val = v2[i];
        auto it = upper_bound(v1.begin(), v1.end(), val);
        int dis;
        if (it != v1.end())
            dis = (it - v1.begin());
        else
            dis = v1.sz;
        mapp[val] = dis;
    }
    for (int i = 0; i < m; i++)
        cout << mapp[v3[i]] << " ";
    cout << endl;
    return 0;
}