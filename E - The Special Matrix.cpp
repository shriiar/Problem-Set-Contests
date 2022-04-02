#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            cin >> a[i][j];
    }
    a[0][0] = (a[1][2] + a[2][1]) / 2;
    a[1][1] = (a[0][2] + a[2][0]) / 2;
    a[2][2] = (a[0][1] + a[1][0]) / 2;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
