#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    char a[n][n];
    bool f = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    }
    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<n-1; j++)
        {
            if(a[i][j]=='#')
            {
                if(a[i-1][j]=='#' && a[i+1][j]=='#' && a[i][j-1]=='#' && a[i][j+1]=='#')
                {
                    a[i][j] = '.';
                    a[i-1][j] = '.';
                    a[i+1][j] = '.';
                    a[i][j+1] = '.';
                    a[i][j-1] = '.';
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]=='#')
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
    else
        cout<<"NO"<<endl;
}

