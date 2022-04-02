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
        int n, cnt = 0, id = -1;
        cin >> n;
        string s;
        cin >> s;
        bool f = 0;
        for0(i, n)
        {
            if (s[i] == '?')
            {
                if (!f)
                {
                    f = 1;
                    id = i - 1;
                }
                cnt++;
            }
            else
            {
                if (cnt != 0 && id == -1)
                {
                    for (int j = i - 1; j > id; j--)
                    {
                        if (s[j + 1] == 'B')
                            s[j] = 'R';
                        else
                            s[j] = 'B';
                    }
                    cnt = 0;
                    id = -1;
                }
                else if (cnt != 0 && cnt % 2 == 0 && s[id] == s[i])
                {
                    for (int j = id + 1; j < i; j++)
                    {
                        if (j == cnt / 2 + id)
                        {
                            if (s[j - 1] == 'R')
                            {
                                s[j] = 'B';
                                s[j + 1] = 'B';
                                j++;
                            }
                            else
                            {
                                s[j] = 'R';
                                s[j + 1] = 'R';
                                j++;
                            }
                        }
                        else
                        {
                            if (s[j - 1] == 'R')
                                s[j] = 'B';
                            else
                                s[j] = 'R';
                        }
                    }
                    cnt = 0;
                    id = -1;
                }
                else if (cnt != 0 && cnt % 2 == 0 && s[id] != s[i])
                {
                    for (int j = id + 1; j < i; j++)
                    {
                        if (s[j - 1] == 'R')
                            s[j] = 'B';
                        else
                            s[j] = 'R';
                    }
                    cnt = 0;
                    id = -1;
                }
                else if (cnt != 0 && cnt % 2 != 0 && s[id] != s[i])
                {
                    string dis;
                    if(s[id] == 'R') dis += 'B';
                    else dis += 'R';
                    for(int j = 1; j <= cnt - 1; j++)
                    {
                        if(j == cnt / 2) dis += dis[j - 1];
                        else
                        {
                            if(dis[j - 1] == 'B') dis += 'R';
                            else dis += 'B';
                        }
                    }
                    for (int j = id + 1, idx = 0; j < i; j++, idx++)
                        s[j] = dis[idx];
                    cnt = 0;
                    id = -1;
                }
                else if (cnt != 0 && cnt % 2 != 0 && s[id] == s[i])
                {
                    for (int j = id + 1; j < i; j++)
                    {
                        if (s[j - 1] == 'R')
                            s[j] = 'B';
                        else
                            s[j] = 'R';
                    }
                    cnt = 0;
                    id = -1;
                }
                f = 0;
            }
        }
        if (cnt != 0)
        {
            for (int i = s.sz - 1; i >= 0; i--)
            {
                if (s[i] != '?')
                {
                    id = i;
                    break;
                }
            }
            for (int j = id + 1; j < s.sz; j++)
            {
                if (s[j - 1] == 'B')
                    s[j] = 'R';
                else
                    s[j] = 'B';
            }
        }
        cout << s << endl;
    }
    return 0;
}