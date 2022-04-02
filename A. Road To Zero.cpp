#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long int x, y, a, b;
        cin >> x >> y >> a >> b;
        if(x==0 && y==0)
            cout<<"0"<<endl;
        else
        {
            if(x==0)
                cout<<a*y<<endl;
            else if(y==0)
                cout<<a*x<<endl;
            else
            {
                if(x==y)
                {
                    long long int z, p;
                    z = b*x;
                    p = (a*x)+(a*y);
                    cout<<min(p, z)<<endl;
                }
                else
                {
                    long long int z, p;
                    if(x<y)
                    {
                        z = (y-x)*a;
                        z += (b*x);
                        p = (a*x)+(a*y);
                        cout<<min(p, z)<<endl;
                    }
                    else
                    {
                        z = (x-y)*a;
                        z += (b*y);
                        p = (a*x)+(a*y);
                        cout<<min(p, z)<<endl;
                    }
                }
            }
        }
    }
}
