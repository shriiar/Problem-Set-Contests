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
        int n, k, cnt = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        vi v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                v.pb(i + 1);
        }
        v.pb(n);
        if (v.sz == 1)
        {
            if (n <= k)
            {
                cout << 1 << endl;
                continue;
            }
            for (int i = 0; i < n; i += (k + 1))
                cnt++;
            cout << cnt << endl;
            continue;
        }
        cnt += ((v[0] - 1) / (k + 1));
        for (int i = 0; i < v.sz - 2; i++)
        {
            int diff = (v[i + 1] - v[i]) - 1;
            int ans = (diff / ((k * 2) + 1));
            if (ans > 0)
                cnt += ans;
        }
        cnt += ((v[v.sz-1] - v[v.sz - 2]) / (k + 1));
        cout << cnt << endl;
    }
    return 0;
}