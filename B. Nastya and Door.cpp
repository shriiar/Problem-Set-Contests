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
        int n, k, cnt = 0, mx = 0, indx = 0;
        cin >> n >> k;
        vl v;
        vb b(n, 0);

        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
                b[i] = 1;
        }
        vpi pr;
        for (int i = 1; i < k - 1; i++)
        {
            if (b[i])
                cnt++;
        }
        pr.pb(mp(cnt, 1));
        for (int l = 1, r = k; l <= n - k; l++, r++)
        {
            if (b[l - 1] || b[l])
            {
                if (b[l - 1])
                {
                    cnt--;
                    b[l - 1] = 0;
                }
                if (b[l])
                {
                    cnt--;
                    b[l] = 0;
                }
            }
            if (b[r - 1])
                cnt++;
            pr.pb(mp(cnt, l + 1));
        }
        sort(pr.rbegin(), pr.rend());
        indx = pr[0].second;
        mx = pr[0].first;
        for (int i = 0; i < pr.sz; i++)
        {
            if (mx != pr[i].first)
                break;
            if (indx > pr[i].second)
                indx = pr[i].second;
        }
        cout << mx + 1 << " " << indx << endl;
    }
    return 0;
}