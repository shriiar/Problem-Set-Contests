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
    for (int z = 1; z <= t; z++)
    {
        int n, m, res = 0;
        cin >> n >> m;
        string s;
        char c = 'X';
        cin >> s;
        for(int i=0; i<s.sz-1; i++)
        {
            if(s[i]!='?')
            {
                if(s[i+1]!='?' && s[i+1]!=s[i])
                {
                    if(s[i]=='C')
                        res += n;
                    else
                        res += m;
                }
            }
        }
        for(int i=0; i<s.sz-1; i++)
        {
            if(s[i]!='?')
                c = s[i];
            if(s[i]=='?' && s[i+1]!='?')
            {
                if(s[i+1]==c && c=='X')
                    continue;
                if(c=='C')
                    res += n;
                else
                    res += m; 
            }
        }
        cout << "Case #" << z << ": " << res << endl;
    }
}