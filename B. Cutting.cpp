#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vb vector <bool>
#define vl vector <long long>
#define mp make_pair
#define vpi vector <pair<int, int>>
#define vpl vector <pair<long long, long long>>
#define vplb vector <pair<long long, bool>>
#define vpib vector <pair<int, bool>>
#define vv vector <vector<int>>
#define iton (ll i=0; i<n; i++)
#define seti set <int>
#define setl set <long long>
#define mapl map <long long, long long>
#define mapi map <int, int>
#define sz size()
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    int n, b, ans = 0, o = 0, e = 0; cin >> n >> b;
    vi v; vi t; vi res;
    for iton
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]%2==0) e++;
        else o++;
        if(o!=0 && e!=0 && o==e)
        {
            t.pb(i);
            o = 0;
            e = 0;
        }
    }
    for(int i=0; i<t.sz; i++)
    {
        if(t[i]!=n-1)
        {
            int x = t[i];
            int y = abs(v[x] - v[x+1]);
            res.pb(y);
        }
    }
    sort(res.begin(), res.end());
    for(int i=0; i<res.sz; i++)
    {
        if(b-res[i]<0)
            break;
        b -= res[i];
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
