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
    int n, cnt = 0;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != t[i] && s[i] == t[i + 1] && s[i + 1] != t[i + 1] && s[i + 1] == t[i])
        {
            swap(s[i], s[i + 1]);
            cnt++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}