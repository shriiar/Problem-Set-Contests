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
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, ac = 0, bc = 0, q = 0, len;
        string s;
        cin >> a >> b >> s;
        if(s.sz % 2 == 0) len = s.sz / 2;
        else len = s.sz / 2 + 1;
        for0(i, len)
        {
            if(s[i] == '1' && s[s.sz - i - 1] == '?')  s[s.sz - i - 1] = '1';
            else if(s[i] == '0' && s[s.sz - i - 1] == '?') s[s.sz - i - 1] = '0';
            else if(s[i] == '?' && s[s.sz - i - 1] == '1') s[i] = '1';
            else if(s[i] == '?' && s[s.sz - i - 1] == '0') s[i] = '0';
        }
        for0(i, s.sz)
        {
            if(s[i] == '0') ac++;
            else if(s[i] == '1') bc++;
            else q++;
        }
        // cout << s << endl;
        if(ac > a || bc > b)
        {
            cout << -1 << endl;
            continue;
        }
        int d1 = a - ac, d2 = b - bc;
        if(s.sz % 2 == 0)
        {
            for0(i, s.sz)
            {
                if(d1 == 0) break;
                if(s[i] == '?')
                {
                    s[i] = '0';
                    s[s.sz - i - 1] = '0';
                    d1 -= 2;
                }
            }
            for0(i, s.sz)
            {
                if(d2 == 0) break;
                if(s[i] == '?')
                {
                    s[i] = '1';
                    s[s.sz - i - 1] = '1';
                    d2 -= 2;
                }
            }
            if(d1 == 0 && d2 == 0)
            {
                string res = s;
                reverse(all(res));
                if(res == s) cout << s << endl;
                else cout << -1 << endl;
            }
            else cout << -1 << endl;
        }
        else
        {
            if(s[s.sz / 2] == '?')
            {
                if(d1 % 2 != 0)
                {
                    d1 -= 1;
                    s[s.sz / 2] = '0';
                }
                else if(d2 % 2 != 0)
                {
                    d2 -= 1;
                    s[s.sz / 2] = '1';
                }
            }
            for0(i, s.sz)
            {
                if(d1 == 0) break;
                if(s[i] == '?')
                {
                    s[i] = '0';
                    s[s.sz - i - 1] = '0';
                    d1 -= 2;
                }
            }
            for0(i, s.sz)
            {
                if(d2 == 0) break;
                if(s[i] == '?')
                {
                    s[i] = '1';
                    s[s.sz - i - 1] = '1';
                    d2 -= 2;
                }
            }
            if(d1 == 0 && d2 == 0)
            {
                string res = s;
                reverse(all(res));
                if(res == s) cout << s << endl;
                else cout << -1 << endl;
            }
            else cout << -1 << endl;
        }
    }
    return 0;
}