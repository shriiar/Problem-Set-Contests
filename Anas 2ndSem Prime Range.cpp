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
vector <int> v;
void seive()
{
    vector<bool> b(1e6 + 7, 1);
    b[0] = 0, b[1] = 0;
    for(int i = 2; i * i <= 1e6; i++)
    {
        if(b[i])
        {
            for(int j = i * i; j <= 1e6; j += i) b[j] = 0;
        }
    }
    for(int i = 2; i <= 1e6; i++)
    {
        if(b[i]) v.push_back(i);
    }
}
int lower(ll k)
{
    ll l = -1, r = v.sz;
    while(l + 1 < r)
    {
        ll mid = (l + r) / 2;
        if(v[mid] >= k) r = mid;
        else l = mid;
    }
    return r;
}
int upper(int k)
{
    int l = -1, r = v.sz;
    while(l + 1 < r)
    {
        int mid = (l + r) / 2;
        if(v[mid] <= k) l = mid;
        else r = mid;
    }
    return r;
}
signed main()
{
    Fastio;
    seive();
    int t;
    cin >> t;
    while(t--)
    {
        ll l, r;
        cin >> l >> r;
        ll lb = lower(l), rr = upper(r);
        cout << rr - lb << endl;
    }
    return 0;
}