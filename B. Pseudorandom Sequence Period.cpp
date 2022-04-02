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
    int a, b, m, r, indx = 1;
    cin >> a >> b >> m >> r;
    vi v(m, -1);
    v[r] = 0;
    while (1)
    {
        r = (a * r + b) % m;
        if (v[r] > -1)
        {
            cout << indx - v[r] << endl;
            return 0;
        }
        v[r] = indx;
        indx++;
    }
    return 0;
}