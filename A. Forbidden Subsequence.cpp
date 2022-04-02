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
        string s, t;
        cin >> s >> t;
        int x = 0, y = 0, z = 0;
        string res;
        for0(i, s.sz)
        {
            if (s[i] == 'a') 
            {
                x++;
                continue;
            }
            if (s[i] == 'b') 
            {
                y++;
                continue;
            }
            if (s[i] == 'c') 
            {
                z++;
                continue;
            }
            res += s[i];
        }
        sort(all(res));
        if (t == "abc")
        {
            if (x == 0)
            {
                sort(all(s));
                cout << s << endl; 
                continue;
            }
            while (x--) cout << "a";
            while (z--) cout << "c";
            while (y--) cout << "b";
            cout << res << endl;
            continue;
        }
        if (t == "acb")
        {
            while (x--) cout << "a";
            while (y--) cout << "b";
            while (z--) cout << "c";
            cout << res << endl;
            continue;
        }
        if (t == "bac" || t == "bca" || t == "cab" || t == "cba")
        {
            while (x--) cout << "a";
            while (y--) cout << "b";
            while (z--) cout << "c";
            cout << res << endl;
            continue;
        }
    }
    return 0;
}