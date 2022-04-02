#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vb vector <bool>
#define vl vector <long long>
#define vli vector <long long int>
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
    ll n, k;
    cin >> n >> k;
    vli v;
    for iton
    {
        ll val;
        cin >> val;
        v.pb(val);
    }
    if(k==1)
    {
        cout<<*min_element(v.begin(), v.end())<<endl;
        return 0;
    }
    if(k==2)
    {
        int x, y;
        x = v[0], y = v[n-1];
        if(x>y) swap(x, y);
        cout<<y<<endl;
        return 0;
    }
    cout<<*max_element(v.begin(), v.end())<<endl;
    return 0;
}