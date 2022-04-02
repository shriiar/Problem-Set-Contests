#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int x;
            cin >> x;
            a[i][j] = x;
            b[i][j] = 0;
        }
    }
    vector <int> v;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m-1; j++)
        {
            if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1)
            {
                b[i][j] = 1;
                b[i][j+1] = 1;
                b[i+1][j] = 1;
                b[i+1][j+1] = 1;
                v.push_back(i+1);
                v.push_back(j+1);
            }
        }
    }
    bool f = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]!=b[i][j])
            {
                f = false;
                break;
            }
        }
        if(f==false)
            break;
    }
    if(f==false)
        cout<<-1<<endl;
    else
    {
        cout<<v.size()/2<<endl;
        for(int i=0; i<v.size(); i+=2)
            cout<<v[i]<<" "<<v[i+1]<<endl;
    }
}
