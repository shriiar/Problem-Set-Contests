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
    ll a, b, mod;
    cin >> a >> b;
    bool f = 0;
    while (1)
    {
        if (a == 0 || b == 0)
        {
            cout << a << " " << b << endl;
            return 0;
        }
        else if (f)
        {
            if (a >= b * 2)
                goto LOOP;
            else
                goto END;
        }
        if (a >= b * 2)
        {
        LOOP:
            mod = a % (b * 2);
            a = mod;
            f = 0;
            continue;
        }
        mod = b % (a * 2);
        b = mod;
        f = 1;
        continue;
    END:
        cout << a << " " << b << endl;
        return 0;
    }
}