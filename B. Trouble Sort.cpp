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
        int n, z = 0, o = 0;
        cin >> n;
        vi v;
        vb b;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val == 0)
                z++;
            else
                o++;
            b.pb(val);
        }
        if (o == 0 || z == 0)
        {
            bool f = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] > v[i + 1])
                {
                    f = false;
                    break;
                }
            }
            if (f)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}