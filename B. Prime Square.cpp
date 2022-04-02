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
        int n;
        cin >> n;
        int x = 0;
        int a[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                a[i][j] = x;
        }
        int y = n - 1;
        for(int i=0; i<n; i++)
        {
            if(i==n-1)
            {
                a[i][0] = 1;
                a[i][n-1] = 1;
            }
            else
            {
                for(int j=y; j>0; j--)
                {
                    a[i][j] = 1;
                    a[i][j-1] = 1;
                    y--;
                    break;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
}
