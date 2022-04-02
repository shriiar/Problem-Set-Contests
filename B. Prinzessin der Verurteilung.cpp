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
        int n;
        cin >> n;
        string s, rep;
        cin >> s;
        bool f = 0;
        char ch = 'a';
        vs a1;
        for0(i, 26)
        {
            rep += ch;
            a1.pb(rep);
            rep.clear();
            ch++;
        }
        for0(i, a1.sz)
        {
            size_t found = s.find(a1[i]);
            if (found != string::npos) continue;
            else
            {
                cout << a1[i] << endl;
                f = 1;
                break;
            }
        }
        if(f) continue;
        a1.clear();
        ch = 'a';
        for0(i, 26)
        {
            char cg = 'a';
            string res;
            res += ch;
            for0(j, 26)
            {
                res += cg;
                a1.pb(res);
                res.erase(res.begin() + res.sz - 1);
                cg++;
            }
            ch++;
        }
        for0(i, a1.sz)
        {
            size_t found = s.find(a1[i]);
            if (found != string::npos) continue;
            else
            {
                cout << a1[i] << endl;
                f = 1;
                break;
            }
        }
        if(f) continue;
        a1.clear();
        ch = 'a';
        for0(i, 26)
        {
            string res;
            char cg = 'a';
            for0(j, 26)
            {
                char ci = 'a';
                for0(k, 26)
                {
                    res += ch, res += cg, res += ci;
                    a1.pb(res);
                    ci++;
                    res.clear();
                }
                cg++;
            }
            ch++;
        }
        for0(i, a1.sz)
        {
            size_t found = s.find(a1[i]);
            if (found != string::npos) continue;
            else
            {
                cout << a1[i] << endl;
                f = 1;
                break;
            }
        }
        if(f) continue;
        a1.clear();
        ch = 'a';
        for0(i, 26)
        {
            string res;
            char cg = 'a';
            for0(j, 26)
            {
                char ci = 'a';
                for0(k, 26)
                {
                    char cj = 'a';
                    for0(l, 26)
                    {
                        res += ch, res += cg, res += ci, res += cj;
                        a1.pb(res);
                        cj++;
                        res.clear();
                    }
                    ci++;
                }
                cg++;
            }
            ch++;
        }
        for0(i, a1.sz)
        {
            size_t found = s.find(a1[i]);
            if (found != string::npos) continue;
            else
            {
                cout << a1[i] << endl;
                f = 1;
                break;
            }
        }
    }
    return 0;
}