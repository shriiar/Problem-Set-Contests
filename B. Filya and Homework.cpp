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
    ll n, diff;
    cin >> n;
    bool f = true;
    vl v;
    for
        iton
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    if (v.sz == 1 || v.sz == 2)
        cout << "YES" << endl;
    else if (v.sz == 3)
    {
        
        if(v[1]-v[0]==v[2]-v[1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}