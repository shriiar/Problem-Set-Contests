#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, cc = 0;
    char c;
    cin >> n >> m >> c;
    set <char> s;
    char a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin >> a[i][j];
    }
    set <char> :: iterator it;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]==c)
            {
                if(i!=0 && a[i-1][j]!='.' && a[i-1][j]!=c)
                {
                    if(s.find(a[i-1][j])==s.end())
                    {
                        cc++;
                        s.insert(a[i-1][j]);
                    }
                }
                if(i!=n-1 && a[i+1][j]!='.' && a[i+1][j]!=c)
                {
                    if(s.find(a[i+1][j])==s.end())
                    {
                        cc++;
                        s.insert(a[i+1][j]);
                    }
                }
                if(j!=0 && a[i][j-1]!='.' && a[i][j-1]!=c)
                {
                    if(s.find(a[i][j-1])==s.end())
                    {
                        cc++;
                        s.insert(a[i][j-1]);
                    }
                }
                if(j!=m-1 && a[i][j+1]!='.' && a[i][j+1]!=c)
                {
                    if(s.find(a[i][j+1])==s.end())
                    {
                        cc++;
                        s.insert(a[i][j+1]);
                    }
                }
            }
        }
    }
    cout<<cc<<endl;
}
