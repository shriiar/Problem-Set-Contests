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
    int n, a, b, ans = 1;
    cin >> n >> a >> b;
    if (a > b) swap(a, b);
    if (a <= n/2 && b > n/2)
    {
        cout << "Final!" << endl;
        return 0;
    }
    vi v;
    for(int i=1; i<=n; i++)
    {
        if(i==a || i==b) v.pb(300);
        else v.pb(i);
    }
    while(1)
    {
        int x, y;
        bool f = true;
        for(int i=0; i<n; i++)
        {
            if(f==true && v[i]!=0)
            {
                x = i;
                f = false;
            }
            else if(f==false && v[i]!=0)
            {
                y = i;
                if(v[x]==v[y])
                {
                    cout<<ans<<endl;
                    return 0;
                }
                if(v[x]>v[y]) v[y] = 0;
                else v[x] = 0;
                f = true;
            }
        }
        ans++;
    }
}
