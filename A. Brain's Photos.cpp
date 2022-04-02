#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    bool f = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='W' || a[i][j]=='G' || a[i][j]=='B')
                f = true;
            else
            {
                f = false;
                break;
            }
        }
        if(f==false)
            break;
    }
    if(f==true)
        cout<<"#Black&White"<<endl;
    if(f==false)
        cout<<"#Color"<<endl;
}
