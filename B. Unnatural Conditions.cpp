#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    int n, m; cin >> n >> m;
    for(int i=0; i<n; i++)   cout<<1;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        if(i==n-1) cout<<9<<endl;
        else cout<<8;
    }
}
