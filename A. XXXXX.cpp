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
        int n, x, sum = 0, cnt = 0, l = 0, r;
        cin >> n >> x;
        vi v;
        r = n - 1;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val % x == 0)
                cnt++;
            sum += val;
            v.pb(val);
        }
        if (cnt == n)
        {
            cout << -1 << endl;
            continue;
        }
        if (sum % x != 0)
        {
            cout << n << endl;
            continue;
        }
        while (v[l] % x == 0)
            l++;
        while (v[r] % x == 0)
            r--;
        cout << n - min(l + 1, n - r) << endl;
    }
    return 0;
}