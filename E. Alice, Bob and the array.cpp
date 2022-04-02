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
    for (int z = 1; z <= t; z++)
    {
        ll n, cnt = 0, sum = 0;
        cin >> n;
        vi v;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val > 0)
                sum += val;
            v.pb(val);
        }
        if (sum == 0)
        {
            cout << "Case " << z << ": " << *max_element(v.begin(), v.end()) << " " << cnt << endl;
            continue;
        }
        int x, y;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                x = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] > 0)
            {
                y = i;
                break;
            }
        }
        for (int i = x; i <= y; i++)
        {
            if (v[i] < 0 && f == true)
            {
                f = false;
                cnt++;
            }
            else if (v[i] > 0)
                f = true;
        }
        cout << "Case " << z << ": " << sum << " " << cnt << endl;
    }
    return 0;
}