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
    ll x, y, n, ans, mod = 1e9+7;
    cin >> x >> y >> n;
    n %= 6;
    if(n==1)
        ans = x % mod;
    else if(n==2)
        ans = y % mod;
    else if(n==3)
        ans = (y-x) % mod;
    else if(n==4)
        ans = (-x) % mod;
    else if(n==5)
        ans = (-y) % mod;
    else if(n==0)
        ans = (x-y) % mod;
    if(ans>=0)
        cout<<ans<<endl;
    else
        cout<<mod+ans<<endl;
}