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
    string s, rr, res;
    cin >> s;
    char c1, c2, c3, c4;
    int r = 0, b = 0, y = 0, g = 0, cnt = 0;
    for (int i = 0; i < s.sz; i += 4)
    {
        if (s[i] != '!')
        {
            c1 = s[i];
            break;
        }
    }
    for (int i = 1; i < s.sz; i += 4)
    {
        if (s[i] != '!')
        {
            c2 = s[i];
            break;
        }
    }
    for (int i = 2; i < s.sz; i += 4)
    {
        if (s[i] != '!')
        {
            c3 = s[i];
            break;
        }
    }
    for (int i = 3; i < s.sz; i += 4)
    {
        if (s[i] != '!')
        {
            c4 = s[i];
            break;
        }
    }
    rr += c1;
    rr += c2;
    rr += c3;
    rr += c4;
    for (int i = 0; i < s.sz; i++)
    {
        res += s[i];
        cnt++;
        if (cnt == 4)
        {
            for (int j = 0; j < res.sz; j++)
            {
                if (rr[j] != res[j])
                {
                    if (rr[j] == 'R')
                        r++;
                    else if (rr[j] == 'G')
                        g++;
                    else if (rr[j] == 'Y')
                        y++;
                    else if (rr[j] == 'B')
                        b++;
                }
            }
            cnt = 0;
            res.clear();
        }
    }
    if (cnt != 0)
    {
        for (int j = 0; j < res.sz; j++)
        {
            if (rr[j] != res[j])
            {
                if (rr[j] == 'R')
                    r++;
                else if (rr[j] == 'G')
                    g++;
                else if (rr[j] == 'Y')
                    y++;
                else if (rr[j] == 'B')
                    b++;
            }
        }
    }
    cout << r << " " << b << " " << y << " " << g << endl;
    return 0;
}