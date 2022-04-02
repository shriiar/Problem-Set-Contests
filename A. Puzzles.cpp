#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, w;
    cin >> n >> m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin >> a[i];
    }
    sort(a, a+m);
    int j = m - 1;
    for(int i=1; i<n; i++)
    {
        j--;
    }
    for(int i=0; i<=j; i++)
    {
        int x = a[i], y = a[i+(n-1)];
        int z = abs(x-y);
        if(i==0)
            w = z;
        else
            if(z<w)
                w = z;
    }
    cout<<w<<endl;
}
