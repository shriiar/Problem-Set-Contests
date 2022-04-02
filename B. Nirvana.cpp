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
    ll ans = 1, res = 1;
    for (int i = s.sz - 1; i >= 0; i--)
        ans *= (s[i] - '0');
    for (int i = s.sz - 1; i > 0; i--)
    {
        if (s[i] == '9')
            goto REP;
        res = 1;
        s[i] = '9';
        for (int j = i - 1; j >= 0; j--)
        {
            if (j == 0 && (s[j] == '0' || s[j] == '1'))
            {
                s.erase(s.begin());
                break;
            }
            else
            {
                if (s[j] > '1')
                {
                    int id = s[j] - '0';
                    id -= 1;
                    s[j] = (id + '0');
                    break;
                }
                s[j] = '9';
            }
        }
    REP:
        for (int j = 0; j < s.sz; j++)
            res *= (s[j] - '0');
        ans = max(ans, res);
        res = 1;
    }
    cout << ans << endl;
    return 0;
}