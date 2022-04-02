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
int seive(ll n)
{
    vb b(n, 1);
    b[0] = 0, b[1] = 0;
    int cnt = 1;
    for (int i = 2; i * i <= b.sz; i++)
    {
        if (b[i])
        {
            for (int j = i * i; j <= b.sz; j += i)
                b[j] = 0;
        }
    }
    for (int i = 2; i <= b.sz; i++)
    {
        if (b[i])
            cnt++;
    }
    return cnt;
}
int main()
{
    Fastio;
    ll n;
    cin >> n;
    cout << seive(n) << endl;
}