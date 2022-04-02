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
    int n, ind1 = 0, ind2 = 1;
    cin >> n;
    cin.ignore();
    vector<pair<string, int>> vs;
    vector<pair<int, string>> vres;
    vector<pair<string, int>> vfnl;
    for (int i = 0; i < n; i++)
    {
        string s, t;
        getline(cin, s);
        for (int j = 0; j < s.sz - 2; j++)
        {
            if (s[j] == ' ')
            {
                vs.pb(mp(t, 3));
                t.clear();
                continue;
            }
            t += s[j];
        }
        vs.pb(mp(t, 3));
        t.clear();
        if (s[s.sz - 1] == 'W')
            vs[ind2].second -= 3;
        else if (s[s.sz - 1] == 'T')
        {
            vs[ind1].second -= 2;
            vs[ind2].second -= 2;
        }
        ind1 += 2, ind2 += 2;
        s.clear();
    }
    bool f = true;
    sort(vs.rbegin(), vs.rend());
    for (int i = 0; i < vs.sz; i++)
    {
        int pnt = 0;
        bool f = true;
        for (int j = i; j < vs.sz; j++)
        {
            if (vs[i].first != vs[j].first)
            {
                vres.pb(mp(pnt, vs[i].first));
                f = false;
                i = j;
                i--;
                break;
            }
            pnt += vs[j].second;
        }
        if (f)
        {
            vres.pb(mp(pnt, vs[i].first));
            break;
        }
    }
    sort(vres.rbegin(), vres.rend());
    for (int i = 0; i < vres.sz; i++)
        vfnl.pb(mp(vres[i].second, vres[i].first));
    for (int i = 0; i < vfnl.sz; i++)
    {
        bool f = true;
        for (int j = i + 1; j < vfnl.sz; j++)
        {
            if (vfnl[i].second != vfnl[j].second)
            {
                f = false;
                sort(vfnl.begin() + i, vfnl.begin() + j);
                i = j - 1;
                break;
            }
        }
        if (f)
        {
            sort(vfnl.begin() + i, vfnl.end());
            break;
        }
    }
    for (int i = 0; i < vres.sz; i++)
        cout << vfnl[i].first << " " << vfnl[i].second << endl;
}