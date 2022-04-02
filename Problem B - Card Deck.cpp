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
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, j = 0;
        cin >> n;
        vi v; vv r(n+1); vb b(n, 0);
        for(int i=0; i<n; i++)
        {
            int y;
            cin >> y;
            v.pb(y);
        }
        x = v[0], b[0] = 1;
        for(int i=1; i<n; i++)
        {
            if(v[i]>x)
            {
                b[i] = 1;
                x = v[i];
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            r[j].pb(v[i]);
            if(b[i]) j++;
        }
        for(int i=0; i<r.size(); i++)
        {
            if(r[i].size()==0) break;
            for(j=r[i].size()-1; j>=0; j--)
                cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
