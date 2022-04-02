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
    while(t--)
    {
        int n, k, j = 1;
        bool f = false;
        cin >> n >> k;
        int x = (k-1) / 2;
        vb b(n, 0);
        vi v;
        for(int i=1; i<=n; i++)
        {
            if(i!=k)
                b[i] = 1;
        }
        for(int i=1; i<=x; i++)
            b[i] = 0;
        for(int i=1; i<=n; i++)
        {
            if(b[i])
                v.pb(i);
        }
        if(v.sz==0) cout<<0<<endl;
        else
        {
            cout<<v.sz<<endl;
            for(int i=0; i<v.sz; i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
