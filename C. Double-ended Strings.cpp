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
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int ind = 0, ans;
        if (s.sz > t.sz)
            swap(s, t);
        vector<string> vs;
        vector<string> vt;
        vi vres;
        if (s.sz == 1)
            vs.pb(s);
        else
        {
            for (int i = 0; i < s.sz; i++)
            {
                string rep;
                for (int j = i; j < s.sz; j++)
                {
                    for (int k = i; k <= j; k++)
                        rep += s[k];
                    vs.pb(rep);
                    rep.clear();
                }
            }
        }
        if (t.sz == 1)
            vt.pb(t);
        else
        {
            for (int i = 0; i < t.sz; i++)
            {
                string rep;
                for (int j = i; j < t.sz; j++)
                {
                    for (int k = i; k <= j; k++)
                        rep += t[k];
                    vt.pb(rep);
                    rep.clear();
                }
            }
        }
        sort(vs.begin(), vs.end());
        sort(vt.begin(), vt.end());
        for (int i = 0; i < vs.sz; i++)
        {
            bool g;
            g = binary_search(vt.begin(), vt.end(), vs[i]);
            if (g)
                vres.pb(vs[i].sz);
        }
        if (vres.sz != 0)
            ind = *max_element(vres.begin(), vres.end());
        ans = ((s.sz - ind) + (t.sz - ind));
        cout << ans << endl;
    }
    return 0;
}