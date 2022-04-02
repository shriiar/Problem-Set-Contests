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

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    ll n, cnt = 0;
    string dis;
    cin >> n;
    bool f = 0;
    vs v;
    if(n == 1)
    {
        string s;
        cin >> s;
        cout << s << endl;
        return 0;
    }
    for0(i, n)
    {
        string s, res;
        cin >> s;
        res = s;
        sort(rall(res));
        if (!f)
        {
            if (res.sz == 1 && s[0] != '1' && s[0] != '0')
            {
                dis = s;
                f = 1;
            }
            else if (res.sz >= 2 && (res[0] != '1' || (res[0] == '1' && res[1] != '0')))
            {
                dis = s;
                f = 1;
            }
            else v.pb(s);
        }
        else v.pb(s);
    }
    sort(all(v));
    if(v[0].sz == 1 && v[0][0] == '0')
    {
        cout << 0 << endl;
        return 0;
    }
    if(!f) cout << 1;
    for0(i, v.sz) cnt += (v[i].sz - 1);
    if(f) cout << dis;
    while(cnt--) cout << 0;
    cout << endl;
    return 0;
}