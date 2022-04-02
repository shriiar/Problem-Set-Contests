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
        int n, m, k;
        cin >> n >> m >> k;
        if(m==0 || (n==m && m==k))
            cout<<"0"<<endl;
        else if(n==k && m==1)
            cout<<"1"<<endl;
        else if(n==k && m>1)
            cout<<"0"<<endl;
        else if(n/k>=m)
            cout<<m<<endl;
        else
        {
            int x, y, z;
            x = n / k;
            y = min(m, x);
            z = m - y;
            k--;
            int w = z / k;
            if(z%k!=0)
                w++;
            cout<<y-w<<endl;
        }
    }
}
