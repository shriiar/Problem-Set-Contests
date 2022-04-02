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
#define vvb vector <vector<bool>>
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
    int n;
    cin >> n;
    vvi v(1010, vi(1010, 0));
    vector<vector<pair<int, int>>>(1010);
    for(i, 1011) {for(j, 1011) pr[i].pb(mp(0, 0));}
    for0(i, n)
    {
        int a, b;
        cin >> a >> b;
        v[a][b] = 1;
    }
    for1(1, 1000)
    {
        for1(j, 1000)
        {
            if(v[i][j] == 1)
            {
                bool fx = 0, gy = 0;
                int fdi = i, fdj = j, gdi = i, gdj = j, cntf = 0, cntg = 0;
                while(1)
                {
                    if(fx && gy) break;
                    if(fdi + 1 > 1000 || fdj + 1 > 1000) fx = 1;
                    else if(v[fdi + 1][fdi + 1] == 1)
                    {
                        v[fdi + 1][fdi + 1] = 2;
                        cntf++;
                    }
                    if(gdi + 1 > 1000 || gdj - 1 < 1) gy = 1;
                    else if(v[gdi + 1][gdj - 1] == 1)
                    {
                        v[gdi + 1][gdj - 1] = 2;
                        cntg++;
                    }
                }
                pr[i][j].fr = cntf, pr[i][j].se = cntg;
            }
            else if(v[i][j] == 2)
            {
                int fu = i, fd = i, gui = i, guj = j, gdi = i, gdj = j;
                bool x = 0, y = 0, bfu = 0, bfd = 0, bgu = 0, bgd = 0;
                while(1)
                {
                    if(fu - 1 < 1) bfu = 1;
                    else if(v[fu - 1][fu - 1] == 1 || v[fu - 1][fu - 1] == 2)
                    {
                        pr[i][j].fr = pr[fu - 1][fu - 1].fr;
                        bfu = 1;
                        x = 1;  
                    }
                    
                }
            }
        }
    }
    return 0;
}