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
#define __lcm(a, b) ((a * b) / __gcd(a, b))

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
        string t, s;
        cin >> t;
        s = t;
        if (s.sz == 1)
        {
            cout << s << endl;
            continue;
        }
        int ab = 0, ba = 0;
        for (int i = 0; i < s.sz - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b') ab++;
            else if (s[i] == 'b' && s[i + 1] == 'a') ba++;
        }
        if (ab == ba)
        {
            cout << s << endl;
            continue;
        }
        if (s.sz == 2)
        {
            s[0] = s[s.sz - 1];
            cout << s << endl;
        }
        else if (ab > ba)
        {
            for0(i, s.sz)
            {
                if(i == 0 && s[i] == 'a')
                {
                    s[i] = 'b';
                    break;
                }
                else if(s[i] == 'a' && s[i - 1] != 'b')
                {
                    s[i] = 'b';
                    break;
                }
            }
            cout << s << endl;
        }
        else
        {
            for0(i, s.sz)
            {
                if(i == 0 && s[i] == 'b')
                {
                    s[i] = 'a';
                    break;
                }
                else if(s[i] == 'b' && s[i - 1] != 'a')
                {
                    s[i] = 'a';
                    break;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}