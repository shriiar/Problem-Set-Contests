#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string a[m][m*2];
    for(int i=0; i<m; i++)
    {
        for(int j=0; i<m*2; j++)
            cin >> a[i][j];
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; i<m*2; j++)
            cout<< a[i][j];
    }
}
