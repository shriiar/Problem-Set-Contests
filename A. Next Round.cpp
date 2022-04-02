#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    if(a[k]!=0)
    {
        for(int i=k; i<=n; i++)
        {
            if(a[k]==a[k+1])
                k++;
            else
                break;
        }
    }
    if(a[k]==0)
    {
        for(int i=k; i>=1; i--)
        {
            if(i==1 && a[i]==0)
            {
                k--;
                break;
            }
            else if((a[k]<=a[k-1]) && a[i]==0)
            {
                k--;
            }
        }
    }
    cout<<k<<endl;
}
