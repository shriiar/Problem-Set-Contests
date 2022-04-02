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
    int n;
    cin >> n;
    bool f = true;
    vv v(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x].pb(i);
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i].sz != 0)
        {
            int ans = 0;
            for (auto j : v[i])
            {
                if (v[j].sz == 0)
                    ans++;
            }
            if (ans < 3)
            {
                f = false;
                break;
            }
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}