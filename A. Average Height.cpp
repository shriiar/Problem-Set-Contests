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
        vi o, e;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val % 2 == 0)
                e.pb(val);
            else
                o.pb(val);
        }
        if (e.sz >= o.sz)
        {
            for (int i = 0; i < e.sz; i++)
                cout << e[i] << " ";
            for (int i = 0; i < o.sz; i++)
                cout << o[i] << " ";
        }
        else
        {
            for (int i = 0; i < o.sz; i++)
                cout << o[i] << " ";
            for (int i = 0; i < e.sz; i++)
                cout << e[i] << " ";
        }
        cout << endl;
    }
}