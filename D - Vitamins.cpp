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

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vps vector<pair<int, string>>
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
#define unq(v) (v).erase(unique(all((v))), (v).end())
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int dx1[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy1[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int dx2[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy2[8] = {1, 2, 2, 1, -1, -2, -2, -1};

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int n, res = INT_MAX;
    cin >> n;
    vps a, b, c, ab, ac, bc, abc, ans;
    for0(i, n)
    {
        int val;
        string s;
        cin >> val >> s;
        sort(all(s));
        if (s == "A")
            a.pb(mp(val, s));
        else if (s == "B")
            b.pb(mp(val, s));
        else if (s == "C")
            c.pb(mp(val, s));
        else if (s == "AB")
            ab.pb(mp(val, s));
        else if (s == "AC")
            ac.pb(mp(val, s));
        else if (s == "BC")
            bc.pb(mp(val, s));
        else if (s == "ABC")
            abc.pb(mp(val, s));
    }
    sort(all(a)), sort(all(b)), sort(all(c));
    sort(all(ab)), sort(all(ac)), sort(all(bc)), sort(all(abc));


    int x = INT_MAX;
    if(a.sz != 0) x = a[0].fr;
    if(x != INT_MAX && b.sz != 0) x += b[0].fr;
    else x = INT_MAX;
    if(x != INT_MAX && c.sz != 0) x += c[0].fr;
    else x = INT_MAX;
    res = min(x, res);


    x = INT_MAX;
    if(a.sz != 0) x = a[0].fr;
    if(x != INT_MAX && bc.sz != 0) x += bc[0].fr;
    else x = INT_MAX;
    res = min(x, res);


    x = INT_MAX;
    if(b.sz != 0) x = b[0].fr;
    if(x != INT_MAX && ac.sz != 0) x += ac[0].fr;
    else x = INT_MAX;
    res = min(x, res);


    x = INT_MAX;
    if(c.sz != 0) x = c[0].fr;
    if(x != INT_MAX && ab.sz != 0) x += ab[0].fr;
    else x = INT_MAX;
    res = min(x, res);


    x = INT_MAX;
    if(ab.sz != 0) x = ab[0].fr;
    if(x != INT_MAX && bc.sz != 0) x += bc[0].fr;
    else x = INT_MAX;
    res = min(x, res);



    x = INT_MAX;
    if(ab.sz != 0) x = ab[0].fr;
    if(x != INT_MAX && ac.sz != 0) x += ac[0].fr;
    else x = INT_MAX;
    res = min(x, res);


    x = INT_MAX;
    if(bc.sz != 0) x = bc[0].fr;
    if(x != INT_MAX && ac.sz != 0) x += ac[0].fr;
    else x = INT_MAX;
    res = min(x, res);


    x = INT_MAX;
    if(a.sz != 0) x = a[0].fr;
    if(x != INT_MAX && b.sz != 0) x += b[0].fr;
    else x = INT_MAX;
    if(x != INT_MAX && ac.sz != 0) x += ac[0].fr;
    else x = INT_MAX;
    res = min(x, res);


    x = INT_MAX;
    if(a.sz != 0) x = a[0].fr;
    if(x != INT_MAX && b.sz != 0) x += b[0].fr;
    else x = INT_MAX;
    if(x != INT_MAX && bc.sz != 0) x += bc[0].fr;
    else x = INT_MAX;
    res = min(x, res);



    x = INT_MAX;
    if(a.sz != 0) x = a[0].fr;
    if(x != INT_MAX && c.sz != 0) x += c[0].fr;
    else x = INT_MAX;
    if(x != INT_MAX && ab.sz != 0) x += ab[0].fr;
    else x = INT_MAX;
    res = min(x, res);

    x = INT_MAX;
    if(a.sz != 0) x = a[0].fr;
    if(x != INT_MAX && c.sz != 0) x += c[0].fr;
    else x = INT_MAX;
    if(x != INT_MAX && bc.sz != 0) x += bc[0].fr;
    else x = INT_MAX;
    res = min(x, res);



    x = INT_MAX;
    if(a.sz != 0) x = a[0].fr;
    if(x != INT_MAX && c.sz != 0) x += c[0].fr;
    else x = INT_MAX;
    if(x != INT_MAX && ac.sz != 0) x += ac[0].fr;
    else x = INT_MAX;
    res = min(x, res);

    x = INT_MAX;
    if(a.sz != 0) x = a[0].fr;
    if(x != INT_MAX && c.sz != 0) x += c[0].fr;
    else x = INT_MAX;
    if(x != INT_MAX && ab.sz != 0) x += ab[0].fr;
    else x = INT_MAX;
    res = min(x, res);


    x = INT_MAX;
    if(abc.sz != 0) x = abc[0].fr;
    res = min(x, res);

    if(res != INT_MAX) cout << res << endl;
    else cout << -1 << endl;
    return 0;
}