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
    string s;
    cin >> s;
    int idx1, idx2;
    bool f = 1, g = 0, h = 0;
    if (s.sz < 26)
    {
        cout << -1 << endl;
        return 0;
    }
    for0(i, s.sz)
    {
        if (s[i] != '?')
            s[i] = tolower(s[i]);
    }
    for (int i = 0; i <= s.sz - 26; i++)
    {
        vi v(26, 0);
        int cnt = 0, q = 0;
        f = 1, g = 0, h = 0;
        for (int j = i; j < i + 26; j++)
        {
            if (s[j] == '?')
            {
                q++;
                continue;
            }
            v[s[j] - 'a']++;
        }
        for0(j, 26)
        {
            if (v[j] == 0)
                cnt++;
            if (v[j] > 1)
                f = 0;
        }
        if (!f)
            continue;
        if (q == 0 && cnt == 0)
        {
            g = 1;
            break;
        }
        if (q != 0 && cnt != 0 && q == cnt)
        {
            h = 1;
            idx1 = i;
            idx2 = i + 26;
            break;
        }
    }
    if (f)
    {
        if (g && !h)
        {
            for0(i, s.sz)
            {
                if (s[i] == '?')
                    s[i] = 'a';
            }
        }
        else
        {
            vector<char> ch;
            vi v(26, 0);
            int indx = 0;
            for (int i = idx1; i < idx2; i++)
                v[s[i] - 'a']++;
            for0(i, 26)
            {
                if (v[i] == 0)
                    ch.pb(i + 'a');
            }
            for (int i = idx1; i < idx2; i++)
            {
                if (s[i] == '?')
                {
                    s[i] = ch[indx];
                    indx++;
                }
            }
            for0(i, s.sz)
            {
                if (s[i] == '?')
                    s[i] = 'a';
            }
        }
        for0(i, s.sz)
            s[i] = toupper(s[i]);
        cout << s << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}
