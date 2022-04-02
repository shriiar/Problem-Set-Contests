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
    ll a, b, gcd, cnt = 0;
    cin >> a >> b;
    gcd = __gcd(a, b);
    a /= gcd, b /= gcd;
    while (1)
    {
        bool f = 0;
        if (a % 2 == 0)
        {
            a /= 2;
            f = 1;
        }
        else if (a % 3 == 0)
        {
            a /= 3;
            f = 1;
        }
        else if (a % 5 == 0)
        {
            a /= 5;
            f = 1;
        }
        if (f)
            cnt++;
        else
            break;
    }
    while (1)
    {
        bool f = 0;
        if (b % 2 == 0)
        {
            b /= 2;
            f = 1;
        }
        else if (b % 3 == 0)
        {
            b /= 3;
            f = 1;
        }
        else if (b % 5 == 0)
        {
            b /= 5;
            f = 1;
        }
        if (f)
            cnt++;
        else
            break;
    }
    if (a != 0 && b != 0 && a == b)
        cout << cnt << endl;
    else
        cout << -1 << endl;
    return 0;
}