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
#define vvi vector <vector<int>>
#define vvl vector <vector<long long>>
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
    ll n, k, ans = 0, x, y, z; cin >> n >> k;
    vl v; mapl ml; vpl t;
    for iton
    {
        cin >> x;
        v.pb(x);
        ml[x]++;
    }
    sort(v.begin(),v.end() );
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0; i<v.size(); i++)
    {
        y = v[i];
        z = ml[y];
        t.pb(mp(y, z));
    }
    if(t.sz==1)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=t.sz-1; i>0; i--)
    {
        x = t[i].first, y = t[i-1].first;
        if(x>y && x<=y+k)
            t[i-1].second = 0;
        ans += t[i].second;
        if(i==1)
            ans += t[i-1].second;
    }
    cout<<ans<<endl;
    return 0;
}
