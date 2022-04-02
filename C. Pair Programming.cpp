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
        int k, n, m, i = 0, j = 0;
        cin >> k >> n >> m;
        vi v1, v2, v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v1.pb(val);
        }
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;
            v2.pb(val);
        }
        while (i<n || j<m)
        {
            if (i < n && v1[i] <= k)
            {
                v.pb(v1[i]);
                if (v1[i] == 0)
                    k++;
                i++;
            }
            else if (j < m && v2[j] <= k)
            {
                v.pb(v2[j]);
                if (v2[j] == 0)
                    k++;
                j++;
            }
            else
                break;
        }
        if (v.sz == n + m)
        {
            for (int i = 0; i < v.sz; i++)
                cout << v[i] << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
}