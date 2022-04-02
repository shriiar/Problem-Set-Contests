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
    int r, c, cnt = 0;
    cin >> r >> c;
    bool f = false;
    vector<char> vc;
    vector<char> res;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char c;
            cin >> c;
            if (i == r - 1)
                vc.pb(c);
        }
    }
    for (int i = 0; i < vc.sz; i++)
    {
        res.pb(vc[i]);
        f = false;
        for (int j = i + 1; j < vc.sz; j++)
        {
            if (vc[i] != vc[j])
            {
                i = j;
                i--;
                f = true;
                break;
            }
        }
        if(f==false)
            break;
    }
    for(int i=0; i<res.sz; i++)
    {
        if(res[i]=='B')
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}