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
ll lower(vector<ll> &v, ll start, ll end, ll val)
{
    if (start == end)
        return v[start] <= val ? start : -1;
    int mid = start + (end - start) / 2;
    if (val < v[mid])
        return lower(v, start, mid, val);
    int ret = lower(v, mid + 1, end, val);
    return ret == -1 ? mid : ret;
}
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        li n, sum = 0, dis, val, res, i;
        cin >> n;
        vl v;
        v.pb(1);
        for (int i = 1; i < 40; i++)
            v.pb(pow(3, i));
        vb b(v.sz, 0);
        bool f = binary_search(v.begin(), v.end(), n);
        if (f)
        {
            cout << n << endl;
            continue;
        }
        val = lower(v, 0, v.sz - 1, n);
        for (i = val; i >= 0; i--)
        {
            if (sum + v[i] <= n)
            {
                sum += v[i];
                b[i] = 1;
            }
        }
        for (int i = 0; i <= val; i++)
        {
            if (!b[i])
            {
                sum += v[i];
                b[i] = 1;
            }
            if (sum >= n)
                break;
        }
        for (int i = 0; i <= val; i++)
        {
            if (b[i] && sum - v[i] >= n)
                sum -= v[i];
        }
        if (sum >= n)
            cout << sum << endl;
        else
        {
            auto it = upper_bound(v.begin(), v.end(), n);
            dis = it - v.begin();
            cout << v[dis] << endl;
        }
    }
    return 0;
}