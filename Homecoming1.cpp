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
bool chk(int a, int b, char init, int p)
{
    if (init == 'A')
    {
        if (a > p)
            return true;
    }
    else
    {
        if (b > p)
            return true;
    }
    return false;
}
int dp(int a, int b, char init)
{
    if (init == 'A')
    {
        return a;
    }
    else
    {
        return b;
    }
}

signed main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, l, ans = 0, j, tmp = 0;
        string s;
        char init;
        cin >> a >> b >> p;
        cin >> s;
        l = s.size() - 1;
        init = s[l - 1];
        if (chk(a, b, init, p) == true)
        {
            cout << l + 1 << endl;
            continue;
        }
        p -= dp(a, b, init);
        for (j = l - 2; j >= 0; j--)
        {
            if (init == s[j])
                continue;
            ans = j + 1;
            init = s[j];
            if (chk(a, b, init, p) == true)
            {
                tmp = 1;
                break;
            }
            p -= dp(a, b, init);
        }
        if (tmp == 0)
            cout << 1 << endl;
        else
            cout << ans + 1 << endl;
    }
    return 0;
}