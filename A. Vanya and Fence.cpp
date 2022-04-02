#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int a[n], c = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>h)
        {
             c += 2;
        }
        else
        {
            c++;
        }
    }
    cout<<c<<endl;
}
