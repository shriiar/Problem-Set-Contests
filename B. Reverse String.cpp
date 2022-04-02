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
    int t;
    cin >> t;
    while (t--)
    {
        string s, t, res, rep;
        cin >> s >> t;
        bool f = 0;
        for (int i = 0; i < s.sz; i++)
        {
            string res;
            int indx = 0;
            res.clear();
            rep.clear();
            if (s[i] == t[indx])
            {
                for (int j = i; j < s.sz; j++)
                {
                    rep.clear();
                    res += s[j];
                    indx++;
                    if (res + rep == t)
                    {
                        f = 1;
                        break;
                    }
                    for (int k = j - 1, idx = indx; k >= 0; k--)
                    {
                        if (res + rep == t)
                        {
                            f = 1;
                            break;
                        }
                        if (s[k] == t[idx])
                        {
                            rep += s[k];
                            idx++;
                        }
                        else if (s[k] != t[idx])
                        {
                            rep.clear();
                            break;
                        }
                    }
                    if (res + rep == t)
                    {
                        f = 1;
                        break;
                    }
                }
                if (f) break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}