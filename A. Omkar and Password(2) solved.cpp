#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, y=0;
        cin >> n;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if(a[i]!=a[i+1])
            {
                y=0;
                break;
            }
            else
                y=1;
        }
        if(y==1)
        {
            cout<<n<<endl;
        }
        if(y==0)
            cout<<"1"<<endl;
    }
}
