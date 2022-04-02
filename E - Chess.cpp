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
#define vvb vector <vector<bool>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>
#define pii pair<int, int>

#define for0(i, n) for (ll i=0;i<n;i++)
#define for1(i, n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define unq(v) (v).erase(unique(all((v))), (v).end())

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    string s, t;
    cin >> s >> t;
    pii a = {(s[0] - 'a'), (s[1] -'1')}, b = {(t[0] - 'a'), (t[1] - '1')};
    int cnt = 0;
    vvi p(8);
    for0(i, 8)
    {
        for0(j, 8) p[i].pb(1);
    }
    p[a.fr][a.se] = 0, p[b.fr][b.se] = 0;
    for0(i, 8)
    {
        for0(j, 8)
        {
            pii pr = {i, j};
            if(pr == a || pr == b) continue;
            else
            {
                
            }
        }
    }
    for(int i = a.fr - 1; i >= 0; i--) p[i][a.se] = 0;
    for(int i = a.fr + 1; i < 8; i++) p[i][a.se] = 0;
    for(int i = a.se - 1; i >= 0; i--) p[a.fr][i] = 0;
    for(int i = a.se + 1; i < 8; i++) p[a.fr][i] = 0;


    for0(i, 8)
    {
        for0(j, 8) if(p[i][j]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}