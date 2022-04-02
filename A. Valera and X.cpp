#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    char a[n][n];
    bool b[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    }
    int x = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            b[i][j] = x;
    }
    char c = a[0][0], y;
    b[0][0] = 0;
    bool f = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i][j]==1 && c!=a[i][j])
            {
                y = a[i][j];
                b[i][j] = 0;
                f = false;
                break;
            }
        }
        if(f==false)
            break;
    }
    if(f==true)
        cout<<"NO"<<endl;
    if(f==false)
    {
        f = true;
        for(int i=0, j=0; i<n && j<n; i++, j++)
        {
            if(c!=a[i][j])
            {
                f = false;
                break;
            }
            else
                b[i][j] = 0;
        }
        if(f==true)
        {
            for(int i=0, j=n-1; i<n && j>=0; i++, j--)
            {
                if(c!=a[i][j])
                {
                    f = false;
                    break;
                }
                else
                    b[i][j] = 0;
            }
        }
        if(f==true)
        {
            bool g = true;
            f = true;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(b[i][j]==1 && y==a[i][j])
                    {
                        b[i][j] = 0;
                    }
                    else if(b[i][j]==1 && y!=a[i][j])
                    {
                        f = false;
                        break;
                    }
                }
                if(f==false)
                    break;
            }
            if(f==true)
                cout<<"YES"<<endl;
        }
        if(f==false)
            cout<<"NO"<<endl;
    }
}
