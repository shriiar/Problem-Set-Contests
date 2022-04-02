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
int tprime(ll val, vector<bool> &b)
{
    ll res = sqrt(val);
    if (res * res == val)
    {
        if (b[res])
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    Fastio;
    ll n;
    cin >> n;
    vector<bool> b(1e6 + 3, 1);
    b[0] = 0, b[1] = 0;
    for (int i = 2; i * i <= 1e6 + 3; i++)
    {
        if (b[i] == 1)
        {
            for (int j = i * i; j <= 1e6 + 3; j += i)
            {
                b[j] = 0;
            }
        }
    }
    while (n--)
    {
        ll val;
        cin >> val;
        if (val == 4)
            cout << "YES" << endl;
        else if (val % 2 == 0 || (val >= 1 && val <= 3))
            cout << "NO" << endl;
        else
        {
            if (tprime(val, b))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}