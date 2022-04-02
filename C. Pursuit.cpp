#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1000000007
#define fr first
#define se second

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, indx;
        cin >> n;
        indx = n;
        vi a, b;
        for0(i, n)
        {
            int val;
            cin >> val;
            a.pb(val);
        }
        for0(i, n)
        {
            int val;
            cin >> val;
            b.pb(val);
        }
        sort(rall(a)), sort(rall(b));
        vi x(n + 1, 0), y(n + 1, 0);
        for0(i, n)
        {
            x[i + 1] = x[i] + a[i];
            y[i + 1] = y[i] + b[i];
        }
        while(1)
        {
            int k = indx - (indx / 4);
            ll p = (indx - n) * 100 + (x[max(0, k - (indx - n))]);
            ll q = y[min(k, n)];
            if (p >= q)
            {
                cout << indx - n << endl;
                break;
            }
            indx++;
        }
    }
    return 0;
}