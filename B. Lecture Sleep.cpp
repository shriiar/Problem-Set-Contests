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
    int n, k, s1 = 0, s2 = 0, r = 0, z; cin >> n >> k;
    z = k;
    vi v; vb b(n, 0); vl p;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    for(int i=0; i<n; i++)
    {
        bool y;
        cin >> y;
        if(y)
        {
            b[i] = 1;
            r += v[i];
        }
    }
    for(int i=0; i<k; i++)
    {
        if(b[i]) s1 += v[i];
        s2 += v[i];
    }
    p.pb((r-s1)+s2);
    for(int i=1; i<=n-k; i++)
    {
        if(b[i-1]) s1 -= v[i-1];
        if(b[z]) s1 += v[z];
        s2 -= v[i-1];
        s2 += v[z];
        p.pb((r-s1)+s2);
        z++; 
    }
    cout<<*max_element(p.begin(), p.end())<<endl;
}