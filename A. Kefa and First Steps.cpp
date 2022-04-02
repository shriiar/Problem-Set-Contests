#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, x=1;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        c = 1;
        for(int j=i; j<n-1; j++)
        {
            if(a[j]<=a[j+1])
            {
                c++;
            }
            else
                break;
        }
        if(c>=x)
            x = c;
    }
    cout<<x<<endl;
}
