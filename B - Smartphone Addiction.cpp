#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, m, t, x, z, a, b;
    cin >> n >> m >> t;
    x = n;
    bool f = true;
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        if(i==0)
        {
            x -= abs(0-a);
            if(x<=0)
            {
                f = false;
                break;
            }
            if(abs(a-b) >= (n-x))
                x = n;
            else
                x += abs(a-b);
            z = b;
        }
        else
        {
            x -= abs(a-z);
            if(x<=0)
            {
                f = false;
                break;
            }
            if(abs(a-b)>= (n-x))
                x = n;
            else
                x += abs(a-b);
            z = b;
        }
    }
    x -= abs(t-z);
    if(x<=0 || f==false)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}
