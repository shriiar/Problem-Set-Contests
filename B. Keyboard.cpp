#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define mp make_pair
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define vplb vector<pair<long long, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define iton (ll i = 0; i < n; i++)
#define seti set<int>
#define setl set<long long>
#define mapl map<long long, long long>
#define mapi map<int, int>
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int distcal(int x1, int y1, int x2, int y2, int x)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) <= x;
}
int main()
{
    Fastio;
    int n, m, x, k, cnt = 0;
    cin >> n >> m >> x;
    map<char, int> mps;
    vpi v[26], pr;
    vi res(26);
    bool f = true, g = false, h = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 'S')
            {
                h = false;
                pr.pb(mp(i, j));
            }
            else
                v[ch - 'a'].pb(mp(i, j));
            mps[ch]++;
        }
    }
    string s;
    cin >> k >> s;
    for (int i = 0; i < k; i++)
    {
        char ch = s[i];
        if (s[i] >= 'A' && s[i] <= 'Z')
            g = true;
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (mps[ch] == 0)
            {
                char ch = s[i] + 32;
                if (mps[ch] == 0)
                {
                    f = false;
                    break;
                }
            }
        }
        else
        {
            if (mps[ch] == 0)
            {
                f = false;
                break;
            }
        }
    }
    if (f == false)
        cout << -1 << endl;
    else if (h && g)
        cout << -1 << endl;
    else
    {
        string s;
        cin >> k >> s;
        for (int i = 0; i < 26; i++)
        {
            char ch = i + 'a';
            bool q = false;
            for (int j = 0; j < v[ch - 'a'].sz; j++)
            {
                for (int k = 0; k < pr.sz; k++)
                {
                    int x1 = v[ch - 'a'][j].first, y1 = v[ch - 'a'][j].second;
                    int x2 = pr[k].first, y2 = pr[k].second;
                    if (distcal(x1, y1, x2, y2, x))
                    {
                        q = true;
                        break;
                    }
                }
                if (q)
                    break;
            }
            if (q)
                res[ch - 'a'] = 0;
            else
                res[ch - 'a'] = 1;
        }
        for (int i = 0; i < k; i++)
        {
            if (isupper(s[i]))
            {
                s[i] += 32;
                cnt += res[s[i] - 'a'];
            }
        }
        cout << cnt << endl;
    }
}