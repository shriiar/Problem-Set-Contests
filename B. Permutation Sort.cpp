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
        int n, indx = 1;
        cin >> n;
        bool f = 1;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (indx != val)
                f = 0;
            v.pb(val);
            indx++;
        }
        if (f)
        {
            cout << 0 << endl;
            continue;
        }
        if (v[0] == n && v[n - 1] == 1)
            cout << 3 << endl;
        else if (v[0] == 1 || v[n - 1] == n)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}