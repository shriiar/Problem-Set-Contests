#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0, y=0, c=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+n);
    for(int i=n-1; i>=0 && y<=sum/2; i--)
    {
        y += a[i];
        c++;
    }
    cout<<c<<endl;
}
