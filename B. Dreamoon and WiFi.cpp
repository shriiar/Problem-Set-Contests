#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
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
    string s, t;
    cin >> s >> t;
    int ans = 0, res = 0, cnt = 0;
    vi v;
    for (int i = 0; i < s.sz; i++)
    {
        if (s[i] == '+')
            ans++;
        else
            ans--;
    }
    for (int i = 0; i < t.sz; i++)
    {
        if (t[i] == '?')
            cnt++;
    }
    if (cnt == 0)
    {
        for (int i = 0; i < t.sz; i++)
        {
            if (t[i] == '+')
                res++;
            else
                res--;
        }
        if (res == ans)
            cout << "1.000000000000" << endl;
        else
            cout << "0.000000000000" << endl;
        return 0;
    }
    for (int z = cnt; z >= 0; z--)
    {
        string x = t;
        int rep = z, repp = cnt - rep;

        res = 0;
        for (int i = 0; i < t.sz && rep > 0; i++)
        {
            if (x[i] == '?')
            {
                x[i] = '+';
                rep--;
            }
        }
        for (int i = 0; i < t.sz && repp > 0; i++)
        {
            if (x[i] == '?')
            {
                x[i] = '-';
                repp--;
            }
        }
        for (int i = 0; i < x.sz; i++)
        {
            if (x[i] == '+')
                res++;
            else
                res--;
        }
        v.pb(res);
        x.clear();
    }
    int lim = v.sz;
    for (int i = 1; i < lim - 1; i++)
    {
        for (int j = 0; j < cnt - 1; j++)
            v.pb(v[i]);
    }
    sort(v.begin(), v.end());
    int cur = 0;
    for (int i = 0; i < v.sz; i++)
    {
        if (v[i] == ans)
            cur++;
    }
    for(int i=0; i<v.sz; i++)   cout<<v[i]<<" ";
    cout<<" "<<ans<<endl;
    if (cur == 0)
        cout << "0.000000000000" << endl;
    else
        cout << double(cur / v.sz) << endl;
}