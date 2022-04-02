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
    int h1, a1, c1, h2, a2;
    cin >> h1 >> a1 >> c1 >> h2 >> a2;
    vector<string> v;
    while (1)
    {
        if (h1 - a2 <= 0 && h2 - a1 > 0)
        {
            h1 += c1;
            v.pb("HEAL");
            h1 -= a2;
            continue;
        }
        h2 -= a1;
        v.pb("STRIKE");
        if (h2 <= 0)
            break;
        h1 -= a2;
    }
    cout << v.sz << endl;
    for (int i = 0; i < v.sz; i++)
        cout << v[i] << endl;
    return 0;
}