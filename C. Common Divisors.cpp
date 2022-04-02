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
    ll n, gcd = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        gcd = __gcd(val, gcd);
    }
    setl sett;
    for (int i = 1; i <= sqrt(gcd); i++)
    {
        if (gcd % i == 0)
        {
            sett.insert(i);
            sett.insert(gcd / i);
        }
    }
    cout << sett.sz << endl;
}