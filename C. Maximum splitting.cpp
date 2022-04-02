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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1 || n == 2 || n == 3 || n == 5 || n == 7 || n == 11)
            cout << -1 << endl;
        else if (n == 6 || n == 9)
            cout << 1 << endl;
        else if (n % 4 == 0)
            cout << n / 4 << endl;
        else if (n % 4 == 1)
            cout << (((n - 1) / 4) - 2) + 1 << endl;
        else if (n % 4 == 2)
            cout << (((n - 2) / 4) - 1) + 1 << endl;
        else if (n % 4 == 3)
            cout << (((n - 3) / 4) - 3) + 2 << endl;
    }
    return 0;
}