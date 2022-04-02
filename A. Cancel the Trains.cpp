#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector <int> zz(101, 0);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            zz[x]++;
        }
        for(int i=0; i<m; i++)
        {
            int x;
            cin >> x;
            zz[x]++;
        }
        int c = 0;
        for(int i=1; i<=100; i++)
        {
            if(zz[i]>=2)
                c++;
        }
        cout<<c<<endl;
    }
}
