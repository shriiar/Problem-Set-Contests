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
        int n, mn, mx, cnt = 0, ans = 1e5;
        cin >> n;
        vi v;
        bool f = 0, g = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        mn = (min_element(v.begin(), v.end()) - v.begin());
        mn += 1;
        mx = (max_element(v.begin(), v.end()) - v.begin());
        mx += 1;
        cnt = min((mn - 1), (n - mn));
        ans = min((mx - 1), (n - mx));
        ans = (ans + 1) + (cnt + 1);
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (f && g)
                break;
            if (i == mn - 1)
            {
                cnt++;
                f = 1;
                continue;
            }
            else if (i == mx - 1)
            {
                cnt++;
                g = 1;
                continue;
            }
            cnt++;
        }
        ans = min(ans, cnt);
        f = 0, g = 0;
        cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (f && g)
                break;
            if (i == mn - 1)
            {
                cnt++;
                f = 1;
                continue;
            }
            else if (i == mx - 1)
            {
                cnt++;
                g = 1;
                continue;
            }
            cnt++;
        }
        ans = min(ans, cnt);
        cout << ans << endl;
    }
}