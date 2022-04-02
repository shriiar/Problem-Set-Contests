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
    int n, sum = 0, rep;
    cin >> n;
    vi v, res;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.pb(val);
        sum += val;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        rep = sum;
        int val = 1e8;
        for (int j = 1; j <= v[i] / 2; j++)
        {
            rep = sum;
            if (v[i] % j == 0)
            {
                rep -= v[i];
                rep += (v[i] / j);
                if (i != 0)
                {
                    rep -= v[0];
                    rep += (v[0] * j);
                }
                else
                {
                    rep -= v[1];
                    rep += (v[1] * j);
                }
                val = min(rep, val);
                rep = sum;
            }
        }
        res.pb(val);
    }
    res.pb(sum);
    cout << *min_element(res.begin(), res.end()) << endl;
    return 0;
}