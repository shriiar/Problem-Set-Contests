#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k, c = 0, w, x, y, z = 1e9;
        cin >> n >> k;
        if(n<k)
            cout<<1<<endl;
        else if(n==k)
            cout<<2<<endl;
        else
        {
            x = n, y = k;
            bool f = false;
            while(1)
            {
                if(y==1)
                    y++;
                else
                {
                    x = n;
                    while(1)
                    {
                        if(x/y==0)
                        {
                            c += (abs(y-k))+1;
                            break;
                        }
                        x /= y;
                        c++;
                    }
                    if(c<=z)
                        z = c;
                    else if(c>z)
                        break;
                    c = 0;
                    y++;
                }
            }
            cout<<z<<endl;
        }
    }
}
