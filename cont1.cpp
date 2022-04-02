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
#define vv vector<vector<int>>
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
    ll p, m, cnt, c = 1, indx = 0;
    cin >> p >> m;
    cnt = p - 1;
    vi v;
    v.pb(0);
    while (1)
    {
        if (cnt == 0 || m == 0) break;
        m--;
        if (indx + c <= p - 1)
        {
            indx += c;
            cnt--;
            c++;
            v.pb(indx);
        }
        else
        {
            int dis = c % p;
            if (dis == 0)
            {
                c++;
                cnt--;
                v.pb(indx);
            }
            else
            {
                int res = (p - 1) - indx;
                dis -= res;
                dis -= 1;
                indx = dis;
                c++;
                cnt--;
                v.pb(indx);
            }
        }
    }
    sort(all(v));
    v.erase(unique(all(v)), v.end());
    cout << v.sz << endl;
}