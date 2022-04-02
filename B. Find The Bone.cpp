#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k, z = 1;
    cin >> n >> m >> k;
    vector <bool> v(n+1, 0);
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        v[x] = 1;
    }
    while(k--)
    {
        int x, y;
        cin >> x >> y;
        if(z==x && v[x]==0)
            z = y;
        else if(z==y && v[y]==0)
            z = x;
    }
    cout<<z<<endl;
}
