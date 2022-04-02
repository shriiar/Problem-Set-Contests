#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, c=0;
    vector <bool> z(101, 0);
    cin >> n;
    cin >> x;
    for(int i=0; i<x; i++)
    {
        int a;
        cin >> a;
        z[a] = 1;
    }
    cin >> y;
    for(int i=0; i<y; i++)
    {
        int b;
        cin >> b;
        z[b] = 1;
    }
    for(int i=1; i<=n; i++)
    {
        if(z[i]==0)
        {
            c=1;
            break;
        }
        else
            c=0;
    }
    if(c==1)
        cout<<"Oh, my keyboard!"<<endl;
    if(c==0)
        cout<<"I become the guy."<<endl;
}
