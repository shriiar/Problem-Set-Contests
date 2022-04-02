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
void seive(int n, vector<int> &v)
{
    ll val = 0;
    for (ll i = 2; i <= n; i++)
    {
        if (!v[i])
        {
            val++;
            for (ll j = i; j <= n; j += i)
                v[j] = val;
        }
    }
}
int main()
{
    Fastio;
    int n;
    cin >> n;
    vi v(n+1, 0);
    seive(n, v);
    for (int i = 2; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}