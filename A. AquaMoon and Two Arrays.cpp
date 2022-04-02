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
        int n, x = 0, y = 0, sum = 0;
        cin >> n;
        vi v, r;
        vector<pair<pair<int, int>, int>> pr;
        vpi res;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            r.pb(val);
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= r[i])
                x += (v[i] - r[i]);
            else
                y += (r[i] - v[i]);
        }
        if (x == 0 && y == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (x == y)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] > r[i])
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (j == i)
                            continue;
                        if (r[j] > v[j])
                        {
                            if (v[i] - r[i] >= r[j] - v[j])
                            {
                                int cnt = r[j] - v[j];
                                v[i] -= r[j] - v[j];
                                v[j] = r[j];
                                pr.pb(mp(mp(i + 1, j + 1), cnt));
                                if (v[i] == r[i])
                                    break;
                            }
                            else
                            {
                                int cnt = v[i] - r[i];
                                v[j] += v[i] - r[i];
                                v[i] = r[i];
                                pr.pb(mp(mp(i + 1, j + 1), cnt));
                                if (v[i] == r[i])
                                    break;
                            }
                        }
                    }
                }
            }
            for (int i = 0; i < pr.sz; i++)
            {
                sum += pr[i].second;
                for (int j = 0; j < pr[i].second; j++)
                    res.pb(mp(pr[i].first.first, pr[i].first.second));
            }
            if (sum <= 100)
            {
                cout << sum << endl;
                for (int i = 0; i < res.sz; i++)
                    cout << res[i].first << " " << res[i].second << endl;
            }
            else
                goto FALSE;
        }
        else
        {
        FALSE:
            cout << -1 << endl;
        }
    }
}