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
        int n, indx = 0;
        cin >> n;
        vi v;
        vb b(n, 0);
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        vector<vector<pair<int, int>>> vr(n + 1);
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++)
        {
            if (!b[i])
            {
                vr[indx].pb(mp(v[i], v[i]));
                b[i] = 1;
                for (int j = i + 1; j < n; j++)
                {
                    if (__gcd(v[i], v[j]) > 1)
                    {
                        int gcd = __gcd(v[i], v[j]);
                        vr[indx].pb(mp(gcd, v[j]));
                        b[j] = 1;
                    }
                }
                indx++;
            }
        }
        for (int i = 0; i < n + 1; i++)
        {
            if (vr[i].empty())
                break;
            sort(vr[i].rbegin(), vr[i].rend());
            for (int j = 0; j < vr[i].sz; j++)
                cout << vr[i][j].second << " ";
        }
        cout << endl;
    }
    return 0;
}