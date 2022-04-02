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

void rmq(int lim, int n, vvi &v)
{
    for(int i = 1; i <= lim; i++)
    {
        int res = pow(2, i) - 1;
        for(int j = 0; j + res <= n; j++)
        {
            int dis = pow(2, i - 1);
            v[i].pb(min(v[i - 1][j], v[i - 1][j + dis]));
        }
    }
}
signed main()
{
    Fastio;
    // int t;
    // cin >> t;
    // while(t--)
    // {
        int n, lim;
        cin >> n;
        lim = (int)log2(n);
        vvi v(lim + 1);
        for0(i, n)
        {
            int val;
            cin >> val;
            v[0].pb(val);
        }
        rmq(lim, n, v);
        for(int i = 0; i <= lim; i++)
        {
            for(int j = 0; j < v[i].sz; j++) cout << v[i][j] << " ";
            cout << endl;
        }
        int q;
        cin >> q;
        while(q--)
        {
            int l, r, dis, cnt, rep;
            cin >> l >> r;
            dis = r - l + 1;
            cnt = (int)log2(dis);
            rep = pow(2, cnt - 1);
            cout << min(v[cnt][l - 1], v[cnt][l - 1 + rep]) << endl;
        }
    // }
    return 0;
}