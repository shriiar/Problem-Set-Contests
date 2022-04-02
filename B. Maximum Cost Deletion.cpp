#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod = 1e9 + 7
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
#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
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
        int n, a, b, dis, on = 0, zo = 0, sum = 0;
        cin >> n >> a >> b;
        dis = a + b;
        string s;
        cin >> s;
        for0(i, n)
        {
            if (s[i] == '1')
                on++;
            else
                zo++;
        }
        if (dis >= 0 || n == 1)
            cout << n * dis << endl;
        else
        {
            while (1)
            {
                if (s.sz == 0)
                    break;
                int cnt = 0, mx = 0, idx1, idx2;
                string r;
                if (on >= zo && zo != 0)
                {
                    for (int i = 0; i < s.sz - 1; i++)
                    {
                        if (s[i] == '0')
                        {
                            cnt++;
                            for (int j = i + 1; j < s.sz; j++)
                            {
                                if (s[i] == s[j])
                                    cnt++;
                                else
                                {
                                    if (cnt > mx)
                                    {
                                        cnt = mx;
                                        idx1 = i;
                                        idx2 = j - 1;
                                    }
                                    cnt = 0;
                                    i += j;
                                    break;
                                }
                            }
                            if (cnt != 0)
                            {
                                if (cnt > mx)
                                {
                                    idx1 = i;
                                    idx2 = s.sz - 1;
                                    break;
                                }
                            }
                        }
                    }
                    r = s;
                    s.clear();
                    for (int i = 0; i < r.sz; i++)
                    {
                        if (i >= idx1 && i <= idx2)
                            continue;
                        s += r[i];
                    }
                    sum += ((a * (idx2 - idx1 + 1)) + b);
                    zo -= (idx2 - idx1 + 1);
                }
                else if (zo > on && on != 0)
                {
                    for (int i = 0; i < s.sz - 1; i++)
                    {
                        if (s[i] == '1')
                        {
                            cnt++;
                            for (int j = i + 1; j < s.sz; j++)
                            {
                                if (s[i] == s[j])
                                    cnt++;
                                else
                                {
                                    if (cnt > mx)
                                    {
                                        cnt = mx;
                                        idx1 = i;
                                        idx2 = j - 1;
                                    }
                                    cnt = 0;
                                    i += j;
                                    break;
                                }
                            }
                            if (cnt != 0)
                            {
                                if (cnt > mx)
                                {
                                    idx1 = i;
                                    idx2 = s.sz - 1;
                                    break;
                                }
                            }
                        }
                    }
                    r = s;
                    s.clear();
                    for (int i = 0; i < r.sz; i++)
                    {
                        if (i >= idx1 && i <= idx2)
                            continue;
                        s += r[i];
                    }
                    sum += ((a * (idx2 - idx1 + 1)) + b);
                    on -= (idx2 - idx1 + 1);
                }
                else if (on > zo && zo == 0)
                {
                    for (int i = 0; i < s.sz - 1; i++)
                    {
                        if (s[i] == '1')
                        {
                            cnt++;
                            for (int j = i + 1; j < s.sz; j++)
                            {
                                if (s[i] == s[j])
                                    cnt++;
                                else
                                {
                                    if (cnt > mx)
                                    {
                                        cnt = mx;
                                        idx1 = i;
                                        idx2 = j - 1;
                                    }
                                    cnt = 0;
                                    i += j;
                                    break;
                                }
                            }
                            if (cnt != 0)
                            {
                                if (cnt > mx)
                                {
                                    idx1 = i;
                                    idx2 = s.sz - 1;
                                    break;
                                }
                            }
                        }
                    }
                    r = s;
                    s.clear();
                    for (int i = 0; i < r.sz; i++)
                    {
                        if (i >= idx1 && i <= idx2)
                            continue;
                        s += r[i];
                    }
                    sum += ((a * (idx2 - idx1 + 1)) + b);
                    zo -= (idx2 - idx1 + 1);
                }
                else
                {
                    for (int i = 0; i < s.sz - 1; i++)
                    {
                        if (s[i] == '1')
                        {
                            cnt++;
                            for (int j = i + 1; j < s.sz; j++)
                            {
                                if (s[i] == s[j])
                                    cnt++;
                                else
                                {
                                    if (cnt > mx)
                                    {
                                        cnt = mx;
                                        idx1 = i;
                                        idx2 = j - 1;
                                    }
                                    cnt = 0;
                                    i += j;
                                    break;
                                }
                            }
                            if (cnt != 0)
                            {
                                if (cnt > mx)
                                {
                                    idx1 = i;
                                    idx2 = s.sz - 1;
                                    break;
                                }
                            }
                        }
                    }
                    r = s;
                    s.clear();
                    for (int i = 0; i < r.sz; i++)
                    {
                        if (i >= idx1 && i <= idx2)
                            continue;
                        s += r[i];
                    }
                    sum += ((a * (idx2 - idx1 + 1)) + b);
                    on -= (idx2 - idx1 + 1);
                }
            }
            cout << sum << endl;
        }
    }
}