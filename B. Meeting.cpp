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
vi vx, vy, r;
int n;
int cal(int x1, int y1, int x2, int y2) 
{
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
bool count(int x, int y)
{
    for0(i, n)
    {
        if(cal(x, y, vx[i], vy[i]) <= r[i] * r[i]) return false;
        return true;
    }
}
signed main()
{
    Fastio;
    int x1, y1, x2, y2, ans = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    for0(i, n)
    {
        int a, b, z;
        cin >> a >> b >> z;
        vx.pb(a);
        vy.pb(b);
        r.pb(z);
    }
    for(int i = min(x1, x2); i <= max(x1, x2); i++) ans += count(i, y1) + count(i, y2);
    for(int i = min(y1, y2) + 1; i < max(y1, y2); i++) ans += count(x1, i) + count(x2, i);
    cout << ans << endl;
    return 0;
}