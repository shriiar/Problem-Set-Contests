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
    int idx = 0;
    double n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    vector<double> v;
    vector<pair<double, int>> pr;
    vector<pair<int, double>> vr;
    vector<pair<int, double>> res;
    for (int i = 0; i < n; i++)
    {
        double x, y, val1, val2;
        cin >> val1 >> val2;
        x = ((val1 * t1 * ((100 - k) / 100)) + (val2 * t2));
        y = ((val2 * t1 * ((100 - k) / 100)) + (val1 * t2));
        x = max(x, y);
        pr.pb(mp(x, i + 1));
    }
    sort(pr.rbegin(), pr.rend());
    vr.pb(mp(pr[0].second, pr[0].first));
    for (int i = 1; i < n; i++)
    {
        if (vr[idx].second == pr[i].first)
        {
            vr.pb(mp(pr[i].second, pr[i].first));
            idx++;
            continue;
        }
        sort(vr.begin(), vr.end());
        for (int j = 0; j < vr.sz; j++)
            res.pb(mp(vr[j].first, vr[j].second));
        vr.clear();
        idx = 0;
        vr.pb(mp(pr[i].second, pr[i].first));
    }
    if (vr.sz != 0)
    {
        sort(vr.begin(), vr.end());
        for (int j = 0; j < vr.sz; j++)
            res.pb(mp(vr[j].first, vr[j].second));
    }
    for (int i = 0; i < res.sz; i++)
        cout << res[i].first << " " << fixed << setprecision(2) << res[i].second << endl;
    return 0;
}