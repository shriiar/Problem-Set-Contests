#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, y;
    cin >> s >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
                swap(b[j], b[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s>a[i])
        {
            s += b[i];
            y=1;
        }
        else
        {
            y=0;
            break;
        }
    }
    if(y==1)
        cout<<"YES"<<endl;
    if(y==0)
        cout<<"NO"<<endl;
}
