#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, m, c = 0;
    cin >> n >> m;
    if(n>m)
        swap(n, m);
    c += (n * (m / 5));
    c += ((m%5) * (n/5));
    for(int i= 5*(n/5)+1; i<=n; i++)
    {
        for(int j=5*(m/5)+1; j<=m; j++)
        {
            if((i+j)%5==0)
                c++;
        }
    }
    cout<<c<<endl;
}
