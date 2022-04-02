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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool f = 1;
        char ch = 'a';
        int indx = -1, idx1, idx2, cnt = 1;
        for (int i = 0; i < s.sz; i++)
        {
            if (s[i] == 'a')
            {
                indx = i;
                break;
            }
        }
        if (indx == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        idx1 = indx, idx2 = indx;
        while (1)
        {
            if (idx1 == 0 && idx2 == s.sz - 1)
                break;
            ch++;
            if (idx1 - 1 >= 0)
            {
                if (s[idx1 - 1] == ch)
                {
                    idx1 -= 1;
                    continue;
                }
            }
            if (idx2 + 1 < s.sz)
            {
                if (s[idx2 + 1] == ch)
                {
                    idx2 += 1;
                    continue;
                }
            }
            f = 0;
            break;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}