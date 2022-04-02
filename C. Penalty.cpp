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
void bit(string res, vs& v, string s)
{
    for(int m = 1; m < pow(2, res.sz); m++)
    {
        string dis;
        vi rep;
        int cnt = 0, indx = 0;
        dis = s;
        for0(i, res.sz)
        {
            if(m & (1 << i)) rep.pb(res[i] - '0');
        }
        // for(auto i : rep) cout << i << " ";
        // cout << endl;
        for0(i, rep.sz) dis[rep[i]] = '1';
        for0(i, dis.sz)
        {
            if(dis[i] == '?') dis[i] = '0';
        }
        // cout << dis << endl;
        v.pb(dis);
    }
}
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        string s, res, rep;
        cin >> s;
        rep = s;
        vs v;
        int mn = 10;
        for0(i, 10)
        {
            if(s[i] == '?') 
            {
                res += (i + '0');
                rep += '0';
            }
        }
        bit(res, v, s);
        // for(auto i : v) cout << i << endl;
        // cout << endl;
        if(v.sz == 0) v.pb(s);
        v.pb(rep);
        for0(i, v.sz)
        {
            int t1 = 0, t2 = 0, c1 = 5, c2 = 5;
            for(int j = 0; j < 10; j += 2)
            {

                if(v[i][j] == '1') t1++;
                c1 -= 1;
                if(t1 > t2 + c2) mn = min(mn, j + 1);
                if(t2 > t1 + c1) mn = min(mn, j + 1);
                if(v[i][j + 1] == '1') t2++;
                c2 -= 1;
                if(t2 > t1 + c1) mn = min(mn, j + 2);
                if(t1 > t2 + c2) mn = min(mn, j + 2);
            }
        }
        cout << mn << endl;
    }
    return 0;
}