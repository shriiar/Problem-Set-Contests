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
    int indx = -1;
    for (int i = 0; i < s.sz - 1; i++)
    {
        if ((s[i] - '0') % 2 == 0)
        {
            if (s[i] < s[s.sz - 1])
            {
                swap(s[i], s[s.sz - 1]);
                cout << s << endl;
                return 0;
            }
            else
                indx = i;
        }
    }
    if (indx == -1)
        cout << -1 << endl;
    else
    {
        swap(s[s.sz - 1], s[indx]);
        cout << s << endl;
    }
    return 0;
}