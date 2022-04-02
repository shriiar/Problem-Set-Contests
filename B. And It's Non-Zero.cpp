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

int a[21][200005];
void precal()
{
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 200002; j++)
        {
            int dis;
            if(j & 1 << (i - 1)) dis = 0;
            else dis = 1;
            a[i][j] = dis + a[i][j - 1];
        }
    }
}
signed main()
{
    Fastio;
    precal();
    for1(i, 5)
    {
        for0(j, 9) cout << a[i][j] << " ";
        cout << endl;
    }
    int x;
    cin >> x;
    while (x--)
    {
        int l, r, ans = INT_MAX;
        cin >> l >> r;
        for (ll i = 1; i < 21; i++)
        {
            ans = min(ans, a[i][r] - a[i][l - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}