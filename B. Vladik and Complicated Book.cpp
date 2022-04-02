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
    int n, t;
    cin >> n >> t;
    vi v;
    v.pb(0);
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        v.pb(val);
    }
    while (t--)
    {
        int l, r, ind, cnt = 0, less;
        bool f = true;
        cin >> l >> r >> ind;
        for (int i = l; i <= r; i++)
        {
            if (v[i] < v[ind])
                cnt++;
        }
        less = ind - l;
        if (cnt != less)
            f = false;
        if (f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}