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
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s, t, p, res;
        cin >> s >> t >> p;
        if (s.sz > t.sz)
        {
            cout << "NO" << endl;
            continue;
        }
        map <char, int> mapp;
        for (int i = 0; i < p.sz; i++)
            mapp[p[i]]++;
        int indx1 = 0, indx2 = 0;
        bool f = 1;
        for (indx1 = 0, indx2 = 0; indx1 < s.sz;)
        {
            if (s[indx1] != t[indx2])
            {
                if (mapp[t[indx2]] > 0)
                {
                    res += t[indx2];
                    mapp[t[indx2]]--;
                    indx2++;
                }
                else
                {
                    f = 0;
                    break;
                }
            }
            else
            {
                res += t[indx2];
                indx1++;
                indx2++;
            }
        }
        if (f && res.sz < t.sz)
        {
            for (int i = indx2; i < t.sz; i++)
            {
                if (mapp[t[i]] > 0)
                {
                    res += t[i];
                    mapp[t[i]]--;
                }
                else
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f && res == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}