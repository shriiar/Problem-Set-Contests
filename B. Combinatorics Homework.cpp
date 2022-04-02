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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, m, pr = 0, ex = 0;
        cin >> a >> b >> c >> m;
        if (a != 0 && b == 0 && c == 0)
        {
            if (a > 1)
            {
                if (a % 2 == 0 && a / 2 == m)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if (a == 0 && b != 0 && c == 0)
        {
            if (b > 1)
            {
                if (b % 2 == 0 && b / 2 == m)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if (a == 0 && b == 0 && c != 0)
        {
            if (c > 1)
            {
                if (c % 2 == 0 && c / 2 == m)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            ex = m;
            if (a > 1)
            {
                ll dis = a % 2;
                if ((a / 2) >= ex)
                {
                    pr += ex;
                    ll gg = (abs(a / 2) - ex);
                    a = dis + (gg * 2);
                    ex = 0;
                    goto END;
                }
                else if(ex != 0)
                {
                    pr += (a / 2);
                    ex -= (a / 2);
                    a = dis;
                }
            }
            if (b > 1)
            {
                ll dis = b % 2;
                if (ex != 0 && (b / 2) >= ex)
                {
                    pr += ex;
                    ll gg = (abs(b / 2) - ex);
                    b = dis + (gg * 2);
                    ex = 0;
                    goto END;
                }
                else if(ex != 0)
                {
                    pr += (b / 2);
                    ex -= (b / 2);
                    b = dis;
                }
            }
            if (c > 1)
            {
                ll dis = c % 2;
                if (ex != 0 && (c / 2) >= ex)
                {
                    pr += ex;
                    ll gg = (abs(c / 2) - ex);
                    c = dis + (gg * 2);
                    ex = 0;
                    goto END;
                }
                else if (ex != 0)
                {
                    pr += (c / 2);
                    ex -= (c / 2);
                    c = dis;
                }
            }
        END:
            cout << a << " " << b << " " << c << endl;
            if (pr < m)
                cout << "NO" << endl;
            else
            {
                vl res;
                if (a != 0)
                    res.pb(a);
                if (b != 0)
                    res.pb(b);
                if (c != 0)
                    res.pb(c);
                sort(all(res));
                if (res.sz == 1)
                {
                    a = res[0];
                    if (a <= pr + 1)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
                if (res.sz == 2)
                {
                    a = res[0];
                    b = res[1];
                    ex = 0;
                    ex += a;
                    b -= a;
                    a = 0;
                    if (b <= ex + pr + 1)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
                if (res.sz == 3)
                {
                    a = res[0];
                    b = res[1];
                    c = res[2];
                    ex = 0;
                    ex += a;
                    b -= a;
                    c -= a;
                    ex += b;
                    c -= b;
                    cout << ex << endl;
                    if (c <= pr + ex + 1)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}