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

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, m, ans = 0;
        cin >> n >> m;
        n /= m;
        m %= 10;
        if(m == 1 || m == 3 || m == 7 || m == 9)
        {
            ll x = n / 10, y = n % 10;
            ans += 45 * x;
            for1(i, y) ans += (m * i) % 10;
        }
        if(m == 2 || m == 4 || m == 6 || m == 8)
        {
            ll x = n / 5, y = n % 5;
            ans += 20 * x;
            for1(i, y) ans += (m * i) % 10;
        }
        if(m == 5)
        {
            ll x = n / 2, y = n % 2;
            ans += 5 * x;
            for1(i, y) ans += (m * i) % 10;
        }
        cout << ans << endl;
    }
    return 0;
}