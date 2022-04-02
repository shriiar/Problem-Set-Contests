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
    int n, m, x, y, ans = INT_MAX;
    cin >> n >> m;
    int a[n][m];
    for0(i, n)
    {
        for0(j, m)
        {
            int val;
            cin >> val;
            a[i][j] = val;
        }
    }
    // for0(i, n)
    // {
    //     for0(j, m) cout << a[i][j] << " ";
    //     cout << endl;
    // }
    cin >> x >> y;
    x -= 1, y -= 1;
    // cout << x << " " << y << endl;
    for0(i, n)
    {
        for0(j, m)
        {
            bool f = 0;
            int cnt = 0;
            if(i + x < n && j + y < m)
            {
                f = 1;
                int dis = x;
                for(int k = i; dis >= 0; k++, dis--)
                {
                    int dis1 = y;
                    for(int l = j; dis1 >= 0; l++, dis1--)
                    {
                        if(a[k][l] == 1) cnt++;
                    }
                }
            }
            if(f) ans = min(ans, cnt);
            cnt = 0;
            f = 0;
            if(i + y < n && j + x < m)
            {
                f = 1;
                int dis = y;
                for(int k = i; dis >= 0; k++, dis--)
                {
                    int dis1 = x;
                    for(int l = j; dis1 >= 0; l++, dis1--)
                    {
                        if(a[k][l] == 1) cnt++;
                    }
                }
            }
            if(f) ans = min(ans, cnt);
            cnt = 0;
        }
    }
    cout << ans << endl;
    return 0;
}