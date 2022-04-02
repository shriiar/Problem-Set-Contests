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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool f = 1;
    mapl mapp;
    mapp[b]++;
    mapp[a + b]++;
    for (int i = 2; i <= 1e4; i++)
        mapp[b + (a * i)]++;
    for (int i = 2; i <= 1e4; i++)
    {
        if (f)
        {
            mapp[d]++;
            if (mapp[d] == 2)
            {
                cout << d << endl;
                return 0;
            }
            mapp[c + d]++;
            if (mapp[c + d] == 2)
            {
                cout << c + d << endl;
                return 0;
            }
        }
        f = 0;
        ll res = d + (c * i);
        mapp[res]++;
        if (mapp[res] == 2)
        {
            cout << res << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}