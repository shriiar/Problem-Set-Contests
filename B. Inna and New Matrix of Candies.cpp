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
    int n, m;
    cin >> n >> m;
    bool f = 1;
    seti sett;
    vi v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (f)
        {
            auto it = find(s.begin(), s.end(), 'G');
            int idx1 = it - s.begin() + 1, idx2;
            it = find(s.begin(), s.end(), 'S');
            idx2 = it - s.begin() + 1;
            sett.insert(idx2 - idx1);
            if (idx1 > idx2)
                f = 0;
        }
    }
    if (!f)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << sett.sz << endl;
    return 0;
}