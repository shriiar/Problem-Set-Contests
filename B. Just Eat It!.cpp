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
        ll n, res = 0;
        cin >> n;
        vl v, ans;
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            if (val <= 0)
                f = false;
            v.pb(val);
            res += val;
        }
        if (f)
        {
            cout << "YES" << endl;
            continue;
        }
        f = true;
        ll val = res;
        for(int i=0; i<n; i++)
        {
            val -= v[i];
            ans.pb(val);
        }
        val = res;
        for(int i=n-1; i>=0; i--)
        {
            val -= v[i];
            ans.pb(val);
        }
        for(int i=0; i<ans.sz; i++)
        {
            if(ans[i]>=res)
            {
                f = false;
                break;
            }
        }
        if (f)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
