#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, y;
    cin >> t;
    while(t--)
    {
        y=0;
        long long r, g, b, w;
        cin >> r >> g >> b >> w;
        long long x = min(r, g);
        long long y = min(x, b);
        if(r==0 && g==0 && b==0)
        {
            y=1;
        }
        else if(r==g && g==b && b==w)
        {
            y=1;
        }
        else
        {
            int z = y - 1;
            {
                r - z;
                g - z;
                b - z;
                w = w + z;
            }
            if((r==0 || g==0 || b==0) && (r%2==0 || g%2==0 || b%2==0 || w%2==0) && (r%2!=0 || g%2!=0 || b%2!=0 || w%2!=0))
            {
                y=1;
            }
        }
        if(y==1)
            cout<<"YES"<<endl;
        if(y==0)
            cout<<"NO"<<endl;
    }
}
