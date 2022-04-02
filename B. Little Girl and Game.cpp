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
    string s;
    cin >> s;
    int cnt = 0;
    vi v(26, 0);
    for (int i = 0; i < s.sz; i++)
        v[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] & 1)
            cnt++;
    }
    if (!cnt || cnt & 1)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
}