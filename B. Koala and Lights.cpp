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
    int n, mx = 0;
    string s;
    cin >> n >> s;
    vv v(n + 1);
    for (int i = 0; i < n; i++)
    {
        int a, b, mult, mv = 0;
        cin >> a >> b;
        bool f = 0;
        mult = (a * mv) + b;
        for (int j = 0; j <= 1e5; j++)
        {
            if (j == 0)
            {
                if (j == mult)
                {
                    if (s[i] == '0')
                    {
                        f = 0;
                        v[i].pb(0);
                    }
                    else
                    {
                        f = 1;
                        v[i].pb(1);
                    }
                    mv++;
                    mult = (a * mv) + b;
                }
                else
                {
                    if (s[i] == '0')
                        v[i].pb(0);
                    else
                    {
                        f = 1;
                        v[i].pb(1);
                    }
                }
            }
            else
            {
                if (j == mult)
                {
                    if (f)
                    {
                        f = 0;
                        v[i].pb(0);
                    }
                    else
                    {
                        f = 1;
                        v[i].pb(1);
                    }
                    mv++;
                    mult = (a * mv) + b;
                }
                else
                {
                    if (!f)
                        v[i].pb(0);
                    else
                        v[i].pb(1);
                }
            }
        }
    }
    for (int i = 0; i <= 1e5; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] == 1)
                cnt++;
        }
        mx = max(cnt, mx);
    }
    cout << mx << endl;
    return 0;
}
