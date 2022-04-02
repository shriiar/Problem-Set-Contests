#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, x=0, y;
        cin >> n;
        long long a[n], c = n;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        if(n==1)
        {
            cout<<c<<endl;
        }
        else if(n==2)
        {
            x = a[n-2];
            if(x!=a[n-1])
            {
                c--;
                cout<<c<<endl;
            }
            else
                cout<<c<<endl;
        }
        else
        {
            x = a[n-3];
            for(int i=n-2; i>=0; i--)
            {
                if(a[i]!=x)
                {
                    x=a[i]+x;
                    c--;
                    y=0;
                    if(i>=n-2)
                        i--;
                }
                else
                {
                    y=1;
                    break;
                }
            }
            if(y==0)
            {
                if(x!=a[n-1])
                {
                    c--;
                }
            }
            cout<<c<<endl;
        }
    }
}
