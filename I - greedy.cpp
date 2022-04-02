#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, y=0, i, j;
        cin >> m >> n;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(a[i]+a[j]==m)
                {
                    y=1;
                    break;
                }
            }
            if(y==1)
            {
                cout<<i<<" "<<j<<endl;
                break;
            }
        }
    }
}
