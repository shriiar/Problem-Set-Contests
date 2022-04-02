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
bool prime(ll n)
{
    bool f = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            f = 0;
            break;
        }
    }
    if (f)
        return 1;
    else
        return 0;
}
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b;
        n = a + b;
        if (a - b == 1 && prime(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}