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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        int dir = 0;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                dir++;
            else
                dir--;
        }
        dir %= 4;
        if (dir < 0)
            dir += 4;
        if (dir == 0)
            cout << "E" << endl;
        else if (dir == 1)
            cout << "S" << endl;
        else if (dir == 2)
            cout << "W" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}