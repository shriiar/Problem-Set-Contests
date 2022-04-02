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
ll lower(vector<int> &v, int start, int end, int sum)
{
    if (start == end)
        return v[start] <= sum ? start : -1;
    int mid = start + (end - start) / 2;
    if (sum < v[mid])
        return lower(v, start, mid, sum);
    int ret = lower(v, mid + 1, end, sum);
    return ret == -1 ? mid : ret;
}
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, res, sum, cnt = 1;
        cin >> n >> res;
        vi v;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
        sort(v.begin(), v.end());
        sum = res;
        while (1)
        {
            if(v.sz==0)
                break;
            int dis = lower(v, 0, v.sz - 1, sum);
            if (dis == -1)
            {
                cnt++;
                sum = res;
                continue;
            }
            sum -= v[dis];
            v.erase(v.begin() + dis);
        }
        cout << cnt << endl;
    }
    return 0;
}