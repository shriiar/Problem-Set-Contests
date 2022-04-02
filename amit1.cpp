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
    string w, x, y, z, s, rep;
    int a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d >> s;
    vi v;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    v.pb(d);
    sort(v.rbegin(), v.rend());
    w = to_string(v[0]);
    x = to_string(v[1]);
    y = to_string(v[2]);
    z = to_string(v[3]);

    for (int i = 0; i < s.sz - w.sz + 1; i++)
    {
        string res;
        int j, cnt;
        for (j = i, cnt = 0; cnt < w.sz; cnt++, j++)
            res += s[j];
        if (res == w)
        {
            sum += stoi(res);
            for (j = i, cnt = 0; cnt < w.sz; cnt++)
                s[j] = 'x';
        }
    }
    for (int i = 0; i < s.sz - x.sz + 1; i++)
    {
        string res;
        int j, cnt;
        for (j = i, cnt = 0; cnt < x.sz; cnt++, j++)
            res += s[j];
        if (res == x)
        {
            // cout<<res<<endl;
            sum += stoi(res);
            for (j = i, cnt = 0; cnt < x.sz; cnt++)
                s[j] = 'x';
        }
    }
    for (int i = 0; i < s.sz - y.sz + 1; i++)
    {
        string res;
        int j, cnt;
        for (j = i, cnt = 0; cnt < y.sz; cnt++, j++)
            res += s[j];
        if (res == y)
        {
            // cout<<res<<endl;
            sum += stoi(res);
            for (j = i, cnt = 0; cnt < y.sz; cnt++)
                s[j] = 'x';
        }
    }
    for (int i = 0; i < s.sz - z.sz + 1; i++)
    {
        string res;
        int j, cnt;
        for (j = i, cnt = 0; cnt < z.sz; cnt++, j++)
            res += s[j];
        if (res == z)
        {
            // cout<<res<<endl;
            sum += stoi(res);
            for (j = i, cnt = 0; cnt < z.sz; cnt++)
                s[j] = 'x';
        }
    }
    cout << sum << endl;
}