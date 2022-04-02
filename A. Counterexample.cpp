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
    ll l, r, x, y;
    cin >> l >> r;
    if (l % 2 == 0)
    {
        x = l;
        y = l + 2;
    }
    else
    {
        x = l + 1;
        y = x + 2;
    }
    if ((x >= l && x <= r) && (y >= l && y <= r))
        cout << x << " " << x + 1 << " " << y << endl;
    else
        cout << -1 << endl;
}