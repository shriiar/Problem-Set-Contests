#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <bool> b(1000003, 1);
    b[0] = 0, b[1] = 0;
    for(int i=2; i*i<=1000003; i++)
    {
        for(int j=i*i; j<=1000003; j+=i)
        {
            b[j] = 0;
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, a, d, c = 0;
        cin >> n >> m >> a >> d;
        for(int i=n; i<=m; i++)
        {
            if(b[i]==1)
            {
                if(i%a!=0 && i%(a+d)!=0 && i%(a+(2*d))!=0 && i%(a+(3*d))!=0 && i%(a+(4*d))!=0)
                    c++;
            }
        }
        for(int i=n; i<=m; i++)
        {
            if(b[i]==0)
            {
                if(i%a!=0 && i%(a+d)!=0 && i%(a+(2*d))!=0 && i%(a+(3*d))!=0 && i%(a+(4*d))!=0)
                    c++;
            }
        }
        cout<<c<<endl;
    }
}
