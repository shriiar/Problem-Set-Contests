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
        int n, m, z = 0, c = 0;
        bool f = true;
        cin >> n >> m;
        char a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                char x;
                cin >> x;
                if(x=='*')
                    z++;
                cin >> a[i][j];
            }
        }
        for(int i=1; i<n-1; i++)
        {
            for(int j=1; j<m-1; j++)
            {
                int k = 0, l = 0, y = 1;
                if(a[i][j]=='*')
                {
                    y += 2;
                    for(int p=i+1; p<n-1; p++)
                    {
                        if(a[p][j]=='*')
                        {
                            for(int q=)
                    }
                }
            }
        }
    }
}
