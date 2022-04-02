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
    int n, k;
    cin >> n >> k;
    vi v;
    bool f = 0;
    if (k >= n)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (k == 0)
            goto ZERO;
        if ((n % 2 == 0 && k % 2 != 0) || (n % 2 != 0 && k % 2 == 0))
        {
            f = 1;
            if (i < k + 1)
                cout << i << " ";
            else
            {
                if (i < n)
                {
                    cout << i + 1 << " " << i << " ";
                    i++;
                }
                else
                    cout << i << endl;
            }
        }
        else
        {
        ZERO:
            if (i <= k + 1)
                v.pb(i);
            else
            {
                if (i + 1 <= n)
                {
                    v.pb(i + 1);
                    v.pb(i);
                }
                else
                    v.pb(i);
                i++;
            }
        }
    }
    if (!f)
    {
        swap(v[0], v[n - 1]);
        for (int i = 0; i < v.sz; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}