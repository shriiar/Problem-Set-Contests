#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1000000007
#define fr first
#define se second

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    string s;
    cin >> s;
    for (int i = 0; i < s.sz - 1; i++)
    {
        if (s[i] == s[i + 1] && i != s.sz - 2)
        {
            int ch1 = s[i] - 'a', ch2 = s[i + 2] - 'a';
            if (s[i] == 'z' && s[i + 2] == 'z') s[i + 1] = 'y';
            else if (s[i] == s[i + 2])
            {
                char ch = s[i];
                ch++;
                s[i + 1] = ch;
            }
            else if((s[i] == 'y' && s[i + 2] == 'z') || (s[i] == 'z' && s[i + 2] == 'y')) s[i + 1] = 'x';
            else if(abs(ch1 - ch2) == 1)
            {

                char ch = s[i], chh = s[i + 2];
                if(ch > chh) swap(ch, chh);
                ch += 2;
                s[i + 1] = ch;
            }
            else if(abs(ch1 - ch2) > 1)
            {
                char ch = s[i], chh = s[i + 2];
                if(ch > chh) swap(ch, chh);
                ch++;
                s[i + 1] = ch;
            }
        }
        else if (s[i] == s[i + 1] && i == s.sz - 2)
        {
            if(s[i] == 'z') s[i + 1] = 'y';
            else
            {
                char ch = s[i];
                ch++;
                s[i + 1] = ch;
            }
        }
    }
    cout << s << endl;
    return 0;
}