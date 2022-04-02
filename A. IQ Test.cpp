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
    int n, e = 0, o = 0;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val % 2 == 0)
            e++;
        else
            o++;
        v.pb(val);
    }
    if (o < e)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    else if (e < o)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    else
        cout << 1 << endl;
    return 0;
}