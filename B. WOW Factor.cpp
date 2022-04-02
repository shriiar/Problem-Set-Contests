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
    string s;
    cin >> s;
    ll cnt = 0, res = 0, ans = 0, mult = 0;
    for (int i = 0; i < s.sz; i++)
    {
        if (s[i] == 'v')
            cnt++;
        else
        {
            if (cnt != 0)
                res += (cnt - 1);
            cnt = 0;
        }
    }
    if (cnt != 0)
        res += (cnt - 1);
    cnt = 0;
    for (int i = 0; i < s.sz; i++)
    {
        if (s[i] == 'v')
            cnt++;
        if (s[i] == 'o')
        {
            if (cnt != 0)
                mult += (cnt - 1);
            cnt = 0;
            ans += mult * (res - mult);
        }
    }
    cout << ans << endl;
    return 0;
}