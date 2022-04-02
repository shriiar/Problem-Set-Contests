#include <bits/stdc++.h>
typedef long long int l;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    l n, k;
    cin >> n >> k;
    l a[n+1], maxi=0;
    for(l i=1; i<=n; i++)
    {
        cin >> a[i];
        if(i<k)
        {
            maxi = max(maxi, a[i]);
        }
    }
    if(n==1 && k%2!=0)
        cout<<"-1"<<endl;
    else
    {
        if(k<n)
            maxi = max(maxi, a[k+1]);
        cout<<maxi<<endl;
    }
}
