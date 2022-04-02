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
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> vs;
        bool h = 1;
        string x, y;
        for (int i = 0; i < m; i++)
        {
            if (i % 2 == 0)
                x += 'R';
            else
                x += 'W';
        }
        for (int i = 0; i < m; i++)
        {
            if (i % 2 == 0)
                y += 'W';
            else
                y += 'R';
        }
        int indx = 0;
        bool e = 1;
        for (int j = 0; j < n; j++)
        {
            string s, t;
            cin >> s;
            bool f = 1, g = 1, p, q;
            t = s;
            sort(t.begin(), t.end());
            p = binary_search(t.begin(), t.end(), 'W');
            q = binary_search(t.begin(), t.end(), 'R');
            if (!p && !q)
            {
                vs.pb(s);
                continue;
            }
            e = 0;
            for (int i = 0; i < m; i++)
            {
                if (s[i] != '.' && s[i] != x[i])
                    f = 0;
            }
            for (int i = 0; i < m; i++)
            {
                if (s[i] != '.' && s[i] != y[i])
                    g = 0;
            }
            if (!f && !g)
                h = 0;
            else if (f)
                vs.pb(x);
            else if (g)
                vs.pb(y);
        }
        if (e && h)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    vs[i] = x;
                else
                    vs[i] = y;
            }
        }
        else if (h && !e && n != 1)
        {
            while (1)
            {
                bool z = 0;
                for (int i = 0; i < n; i++)
                {
                    if (vs[i][0] == 'W')
                    {
                        if (i == 0 && vs[i + 1][0] == '.')
                        {
                            z = 1;
                            vs[i + 1] = x;
                        }
                        else if (i == n - 1 && vs[i - 1][0] == '.')
                        {
                            vs[i - 1] = x;
                            z = 1;
                        }
                        else if (i > 0 && i < n - 1)
                        {
                            if (vs[i - 1][0] == '.')
                            {
                                z = 1;
                                vs[i - 1] = x;
                            }
                            if (vs[i + 1][0] == '.')
                            {
                                vs[i + 1] = x;
                                z = 1;
                            }
                        }
                    }
                    else if (vs[i][0] == 'R')
                    {
                        if (i == 0 && vs[i + 1][0] == '.')
                        {
                            z = 1;
                            vs[i + 1] = y;
                        }
                        else if (i == n - 1 && vs[i - 1][0] == '.')
                        {
                            vs[i - 1] = y;
                            z = 1;
                        }
                        else if (i > 0 && i < n - 1)
                        {
                            if (vs[i - 1][0] == '.')
                            {
                                z = 1;
                                vs[i - 1] = y;
                            }
                            if (vs[i + 1][0] == '.')
                            {
                                vs[i + 1] = y;
                                z = 1;
                            }
                        }
                    }
                }
                if (!z)
                    break;
            }
        }
        if (!h)
            cout << "NO" << endl;
        else
        {
            if (n != 1)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (vs[i][0] == vs[i + 1][0])
                    {
                        h = 0;
                        break;
                    }
                }
            }
            if (h)
            {
                cout << "YES" << endl;
                for (int i = 0; i < vs.sz; i++)
                    cout << vs[i] << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}