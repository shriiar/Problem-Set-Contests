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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        if (a == 1 && b == 1)
            cout << 1 << " " << m << " " << n << " " << 1 << endl;
        else if (a == 1 && b == m)
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        else if (a == n && b == 1)
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        else if (a == n && b == m)
            cout << 1 << " " << m << " " << n << " " << 1 << endl;
        else
        {
            if (abs(1 - a) >= abs(n - a))
                cout << 1 << " " << 1 << " " << n << " " << m << endl;
            else
                cout << n << " " << 1 << " " << 1 << " " << m << endl;
        }
    }
}