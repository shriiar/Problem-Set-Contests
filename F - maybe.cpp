#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n=12, s=0, c=0;
    cin >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    if(k==0)
        cout<<"0"<<endl;
    else
    {
        for(int i=n-1; i>=0; i--)
        {
            s += a[i];
            c++;
            if(i==0 && s<k)
                cout<<"-1"<<endl;
            if(s>=k)
            {
                cout<<c<<endl;
                break;
            }
        }
    }
}
