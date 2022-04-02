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
ll prime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return n / i;
    }
    return 0;
}
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
            continue;
        }
        ll res = prime(n);
        if (res > 0)
            cout << n - res << " " << res << endl;
        else
            cout << 1 << " " << n - 1 << endl;
    }
    return 0;
}