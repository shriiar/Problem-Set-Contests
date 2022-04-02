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
        int n, m, x, y, a, b;
        cin >> n >> m >> x >> y >> a >> b;
        if(x == a || y == b) cout << 0 << endl;
        else if(y < b)
        {
            bool f = 0;
            int cnt = 0;
            while(1)
            {
                if(x == a || y == b) break;
                else if(!f && x == n)
                {
                    f = 1;
                    continue;
                }
                else if(!f)
                {
                    x++, y++;
                    cnt++;
                }
                else
                {
                    x--, y++;
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
        else
        {
            int cnt = 0;
            bool f = 0, g = 0, h = 0;
            while(1)
            {
                if(x == a || y == b) break;
                if(x == n) f = 1;
                if(y == m) g = 1;
                if(f && !g && !h) h = 1;
                if(!h && !f && !g)
                {
                    x++, y++;
                    cnt++;
                }
                if(h)
                {
                    if(f && !g)
                    {
                        x--, y++;
                        cnt++;
                    }
                    else if(f && g)
                    {
                        x--, y--;
                        cnt++;
                    }
                }
                else
                {
                    if(!f && g)
                    {
                        x++, y--;
                        cnt++;
                    }
                    else if(f && g)
                    {
                        x--, y--;
                        cnt++;
                    }
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}