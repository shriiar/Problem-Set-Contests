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
    int n, indx, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    vi v;
    v.pb(0);
    vpi pr;
    bool f = 0, g = 0, h = 0;
    for (int i = 0; i < 9; i++)
    {
        int val;
        cin >> val;
        v.pb(val);
    }
    if (n == 1)
    {
        if (v[s[0] - '0'] >= (s[0] - '0'))
            cout << v[s[0] - '0'];
        else
            cout << s;
        cout << endl;
        return 0;
    }
    for (int i = 0; i < s.sz; i++)
    {
        if (v[s[i] - '0'] > (s[i] - '0'))
        {
            f = 1, h = 1;
            if (!g)
            {
                indx = i;
                g = 1;
            }
            cnt++;
        }
        else if (f && (v[s[i] - '0'] <= (s[i] - '0')))
        {
            f = 0;
            g = 0;
            if (cnt == 1 && (v[s[indx] - '0'] <= (s[indx] - '0')))
            {
                cnt = 0;
                continue;
            }
            cnt = 0;
            pr.pb(mp(indx, i - 1));
        }
    }
    if (f)
    {
        if (cnt == 1 && v[s[indx] - '0'] <= (s[indx] - '0'))
            goto END;
        pr.pb(mp(indx, n - 1));
    }
END:
    if (pr.sz == 0)
        h = 0;
    if (h)
    {
        indx = pr[0].first;
        f = 1;
        for (int i = 0; i < n; i++)
        {
            if (f && i >= indx)
            {
                if(v[s[i]-'0'] >= s[i]-'0')
                    cout<<v[s[i]-'0'];
                else
                {
                    cout<<s[i];
                    f = 0;
                }
            }
            else
                cout << s[i];
        }
    }
    else
        cout << s;
    cout << endl;
    return 0;
}