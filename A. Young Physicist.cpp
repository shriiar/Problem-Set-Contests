#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, y=0;
    cin >> n;
    int a[n][3];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        int s=0;
        for(int j=0; j<n; j++)
        {
            s += a[j][i];
        }
        if(s!=0)
        {
            y=1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(y==0)
        cout<<"YES"<<endl;
}
