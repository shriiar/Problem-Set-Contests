#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j;
    cin >> n;
    int a[n+1], b[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int i=1; i<=n; i++)
    {
        j = a[i];
        j = a[j];
        b[j] = a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cout<<b[i]<<" ";
    }
}
