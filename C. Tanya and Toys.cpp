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
    setl s;
    vl v;
    ll n, k, res = 0, cnt = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        s.insert(val);
    }
    ll val = 1;
    while (1)
    {
        if (s.find(val) == s.end())
        {
            if (res + val > k)
                break;
            res += val;
            cnt++;
            v.pb(val);
        }
        val++;
    }
    cout << cnt << endl;
    for (int i = 0; i < v.sz; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}