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
        ll n, x, y, z;
        bool f = false;
        cin >> n;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ll rep = n / i;
                for (int j = i + 1; j * j <= rep; j++)
                {
                    if (rep % j == 0)
                    {
                        if (i != j && j != rep / j && i != rep / j)
                        {
                            f = true;
                            x = i, y = j, z = rep / j;
                            break;
                        }
                    }
                }
            }
            if (f)
                break;
        }
        if (f)
        {
            if (x == y || y == z || x == z)
                cout << "NO" << endl;
            else
            {
                if (x * y * z == n)
                    cout << "YES" << endl
                         << x << " " << y << " " << z << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}