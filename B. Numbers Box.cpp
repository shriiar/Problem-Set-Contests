#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, pp = 0, nn = 0;
        cin >> n >> m;
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int x;
                cin >> x;
                a[i][j] = x;
                if(x>=0)
                    pp += x;
                else
                    nn += (x*-1);
            }
        }
        if(pp==0 && n!=0)
            cout<<nn<<endl;
        else if(pp!=0 && n==0)
            cout<<pp<<endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m-1; j++)
                {
                    if(a[i][j]<0 && a[i][j+1]>=0)
                    {

                    }
                    else if(a[i][j]>=0 && a[i][j+1]<0)
                    {

                    }
                    else if(a[i][j] && a[i][j+1]>=0)
                }
            }
        }
    }
}
