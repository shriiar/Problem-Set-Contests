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
signed main()
{
    Fastio;
    int n, m, cnt = 0, x, y, p, q;
    string s;
    cin >> n >> m;
    vector<vector<char>> v(n + 1);
    for0(i, n)
    {
        for0(j, m)
        {
            char c;
            cin >> c;
            v[i].pb(c);
            if (c == 'S')
            {
                x = i, y = j;
            }
            else if (c == 'E')
            {
                p = i, q = j;
            }
        }
    }
    cin >> s;
    char a[4] = {'0', '1', '2', '3'};
    for0(i, 24)
    {
        int xx = x, yy = y;
        for0(j, s.sz)
        {
            char ch = s[j];
            if (a[0] == ch) xx--;
            else if (a[1] == ch) xx++;
            else if (a[2] == ch) yy--;
            else if (a[3] == ch) yy++;
            if(xx < 0 || xx >= n || yy < 0 || yy >= m || v[xx][yy] == '#') break;
            if (xx == p && yy == q)
            {
                cnt++;
                break;
            }
        }
        next_permutation(a, a + 4);
    }
    cout << cnt << endl;
    return 0;
}