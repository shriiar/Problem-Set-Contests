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
int transform(int x)
{
    if (x >= 0 && x <= 9)
    {
        if (x == 5)
            x = 2;
        else if (x == 2)
            x = 5;
        x *= 10;
    }
    else
    {
        int ls = x % 10;
        int fs = x / 10;
        if (ls == 2)
            ls = 5;
        else if (ls == 5)
            ls = 2;
        if (fs == 5)
            fs = 2;
        else if (fs == 2)
            fs = 5;
        x = (ls * 10) + fs;
    }
    return x;
}
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int h, m, hh, mm, rep;
        string s, hs, ms;
        cin >> h >> m >> s;
        hs += s[0], hs += s[1];
        ms += s[3], ms += s[4];
        hh = stoi(hs);
        mm = stoi(ms);
        rep = mm;
        pair<int, int> ans;
        for (int i = hh; i < h; i++)
        {
            for (int j = rep; j < mm; j++)
            {
                string hs, ms;
                hs = to_string(i);
                ms = to_string(j);
                bool f = true;
                for (int k = 0; k < hs.sz; k++)
                {
                    if (hs[k] == '0' || hs[k] == '1' || hs[k] == '2' || hs[k] == '5' || hs[k] == '8')
                        continue;
                    else
                        f = false;
                }
                for (int k = 0; k < ms.sz; k++)
                {
                    if (ms[k] == '0' || ms[k] == '1' || ms[k] == '2' || ms[k] == '5' || ms[k] == '8')
                        continue;
                    else
                        f = false;
                }
                if (f)
                {
                    int a = transform(i);
                    int b = transform(j);
                    if (b < h && a < m)
                    {
                        ans = {i, j};
                        goto END;
                    }
                }
            }
            rep = 0;
        }
        ans = {0, 0};
        END:
        if (ans.first >= 0 && ans.first <= 9)
            cout << "0" << ans.first << ":";
        else
            cout << ans.first << ":";
        if (ans.second <= 9)
            cout << "0" << ans.second << endl;
        else
            cout << ans.second << endl;
    }
    return 0;
}