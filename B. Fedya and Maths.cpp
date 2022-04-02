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
    int val = 0;
    if (s.sz >= 3)
    {
        for (int i = s.sz - 2; i < s.sz; i++)
        {
            val *= 10;
            val += (s[i] - '0');
        }
    }
    else
    {
        for (int i = 0; i < s.sz; i++)
        {
            val *= 10;
            val += (s[i] - '0');
        }
    }
    if (val % 4 == 0)
        cout << 4 << endl;
    else
        cout << 0 << endl;
}