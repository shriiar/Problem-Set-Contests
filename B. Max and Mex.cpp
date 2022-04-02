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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, mex = -1, res, maxx;
        cin >> n >> k;
        vl v;
        mapl mapp;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            v.pb(val);
            mapp[val]++;
        }
        if (k == 0)
        {
            cout << n << endl;
            continue;
        }
        else if (n == 1 && v[0] != 1 && v[0] % 2 != 0)
        {
            cout << n + 1 << endl;
            continue;
        }
        else if (n == 1 && v[0] == 1)
        {
            cout << n << endl;
            continue;
        }
        sort(v.begin(), v.end());
        maxx = *max_element(v.begin(), v.end());
        for (int i = 0; i < v.sz - 1; i++)
        {
            if (v[i + 1] - v[i] != 1)
            {
                mex = v[i] + 1;
                break;
            }
        }
        if (mex == -1 && v[0] == 0)
        {
            cout << n + k << endl;
            continue;
        }
        res = mex + maxx;
        if (res % 2 == 0)
            res /= 2;
        else
        {
            res /= 2;
            res++;
        }
        if (mapp[res] == 0)
            cout << n + 1 << endl;
        else
            cout << n << endl;
    }
    return 0;
}