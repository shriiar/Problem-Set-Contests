#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long n, w = 1, x, y, z, c = 1, p = 0, q = 0, r = 0, s = 1e9+3;
        bool f = false, g = false, h = false, o = false, a = false;
        cin >> n >> x >> y;
        z = y - x;

        c = 1;
        int k, l, m, u = n;
        f = false, g = false, h = false, o = false;
        for(k=c; k<=50; k++)
        {
            w = 1;
            for(l=w; l<=50; l++)
            {
                for(m=k, u=n; u>0; m+=l, u--)
                {
                    if(m==x)
                        f = true;
                    if(m==y)
                        g = true;
                    if(f==true && g==true)
                    {
                        h = true;
                        break;
                    }
                }
                if(h==true)
                {
                    o = true;
                    break;
                }
                else
                {
                    f = false, g = false;
                }
            }
            if(o==true)
            {
                c = k, w = l;
                for(int i=c, j=n; j>0; i+=w, j--)
                    p = i;
                if(p<s)
                {
                    s = p;
                    a = true;
                    p = 0;
                    r = c;
                    q = w;
                }
                f = false, g = false, h = false, o = false;
            }
        }
        if(a==true)
        {
            c = r, w = q;
            for(int i=c, j=n; j>0; i+=w, j--)
                cout<<i<<" ";
            cout<<endl;
        }
    }
}
