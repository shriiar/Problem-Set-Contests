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
#define pii pair<int, int>
#define pll pair<ll, ll>

#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vvi vector <vector<int>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i=0;i<n;i++)
#define for1(i, n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define unq(v) (v).erase(unique(all((v))), (v).end())
int dx[]= {-1, 0, 0, 1};
int dy[]= {0, -1, 1, 0};
int dx1[]= {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy1[]= {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int dx2[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy2[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, s, d, j, cnt = 0, ml = INT_MAX, mr = INT_MAX;
        cin >> n >> s >> d >> j;
        if(abs(s - d) % j == 0)
        {
            cout << abs(s - d) / j << endl;
            continue;
        }
        // to right
        if(abs(s - n) % j != 0)
        {
            cnt += ((abs(s - n) / j) + 1);
            if(abs(n - d) % j == 0) mr = (abs(n - d) / j) + cnt;
        }
        else if(abs(1 - s) % j != 0)
        {
            cnt += (abs(1 - s) / j) + 1;
            if(abs(1 - d) % j == 0) mr = (abs(1 - d) / j) + cnt;
        }
        // to left
        if(abs(s - 1) % j != 0)
        {
            cnt = 0;
            cnt += (abs(s - 1) / j) + 1;
            if(abs(1 - d) % j == 0) ml = (abs(1 - d) / j) + cnt;
        }
        else if(abs(s - n) % j != 0)
        {
            cnt = 0;
            cnt += (abs(s - n) / j) + 1;
            if(abs(n - d) % j == 0) ml = (abs(n - d) / j) + cnt;
        }
        // cout << ml << " " << mr << endl;
        if(ml != INT_MAX || mr != INT_MAX) cout << min(ml, mr) << endl;
        else cout << -1 << endl;
    }
    return 0;
}