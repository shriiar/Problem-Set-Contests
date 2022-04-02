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
        int n, cnt = 0, ss;
        cin >> n;
        ss = (n * 2) - 2;
        vpi o, e, v;
        for (int i = 0; i < n * 2; i++)
        {
            int val;
            cin >> val;
            if (val % 2 == 0)
                e.pb(mp(val, i + 1));
            else
                o.pb(mp(val, i + 1));
        }
        sort(e.begin(), e.end());
        sort(o.begin(), o.end());
        // cout << endl;
        if (e.sz >= ss)
        {
            for (int i = 0; i < ss; i += 2)
                cout << e[i].second << " " << e[i + 1].second << endl;
        }
        else if (o.sz >= ss)
        {
            for (int i = 0; i < ss; i += 2)
                cout << o[i].second << " " << o[i + 1].second << endl;
        }
        else
        {
            // cout << "ss-> " << ss << endl;
            int dis = e.sz;
            if (e.sz % 2 != 0)
                dis -= 1;
            // cout << "-> " << e.sz << " " << o.sz << endl;
            for (int i = 0; i < dis; i += 2, cnt += 2)
                v.pb(mp(e[i].second, e[i + 1].second));
            // cout << "cnt-> " << cnt << endl;
            cnt += 2;
            for (int i = 0; cnt <= ss; i += 2, cnt += 2)
            {
                // cout << "loop cnt-> " << cnt << endl;
                v.pb(mp(o[i].second, o[i + 1].second));
            }
            sort(v.begin(), v.end());
            for (int i = 0; i < v.sz; i++)
                cout << v[i].first << " " << v[i].second << endl;
        }
    }
}