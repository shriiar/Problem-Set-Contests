#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin >> a[i][j];
        }
        int b[m][n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> b[i][j];
            }
        }
        int x = 0;
        int y = n;
        while(n--)
        {
            for(int i=0; i<m; i++)
            {
                for(int j=x; j<y; j++)
                {
                    cout<<b[i][j]<<" ";
                    break;
                }
            }
            cout<<endl;
            x++;
        }
    }
}
