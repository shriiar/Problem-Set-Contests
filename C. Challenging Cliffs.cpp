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
        ll n, mn = 1e9, indx;
        cin >> n;
        vl v;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++)
        {
            ll dis = v[i] - v[i - 1];
            if (dis < mn)
            {
                mn = dis;
                indx = i;
            }
        }
        cout << v[indx - 1] << " ";
        for (int i = indx + 1; i < n; i++)
            cout << v[i] << " ";
        for (int i = 0; i < indx - 1; i++)
            cout << v[i] << " ";
        cout << v[indx] << endl;
    }
    return 0;
}