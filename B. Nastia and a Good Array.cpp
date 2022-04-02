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
        int n;
        cin >> n;
        vl v;
        bool f = 1;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (__gcd(v[i], v[i + 1]) != 1)
            {
                f = 0;
                break;
            }
        }
        if (!f)
        {
            ll val = 1e9 + 7;
            cout << n / 2 << endl;
            for (int i = 0; i < n - 1; i += 2)
            {
                ll mn = min(v[i], v[i + 1]);
                v[i] = mn;
                v[i + 1] = val;
                cout << i + 1 << " " << i + 2 << " " << mn << " " << val << endl;
            }
            continue;
        }
        cout << 0 << endl;
    }
    return 0;
}