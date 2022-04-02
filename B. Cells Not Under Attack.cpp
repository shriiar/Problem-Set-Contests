#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m, r, c;
    cin >> n >> m;
    r = n, c = n;
    vector <int> rr(n+1, 0);
    vector <int> cc(n+1, 0);
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        if(rr[x]==0)
        {
            rr[x] = 1;
            r--;
        }
        if(cc[y]==0)
        {
            cc[y] = 1;
            c--;
        }
        cout<<r*c<<" ";
    }
    cout<<endl;
}
