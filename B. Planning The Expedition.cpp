#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vb vector <bool>
#define vl vector <long long>
#define vp vector <make_pair<int, int>>
#define vv vector <vector<int>>
#define iton (ll i=0; i<n; i++)
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    int n, m, s = 0; cin >> n >> m;
    bool f = true;
    vi v(101, 0);
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    for(int i=100; i>=1; i--)
    {
        s = 0;
        for(int j=1; j<=100; j++)
            s += v[j] / i;
        if(s>=n)
        {
            f = false;
            cout<<i<<endl;
            break;
        }
    }
    if(f) cout<<0<<endl;
    return 0;
}
