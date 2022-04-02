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
        vi v(101, 0);
        vi t;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
            t.pb(x);
        }
        sort(t.begin(), t.end());
        t.erase(unique(t.begin(), t.end()), t.end());
        for (int i = 0; i < t.sz; i++)
            cout<<t[i]<<" ";
        for(int i=0; i<=100; i++)
        {
            if(v[i]>1)
            {
                int val = v[i] - 1;
                for(int j=0; j<val; j++)
                    cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}