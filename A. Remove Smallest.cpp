#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, y,c=0;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            c++;
        }
        sort(a, a+n);
        if(n>1)
            y=1;
        if(y==1)
        {
            for(int i=0; i<n-1; i++)
            {
                int x = abs(a[i]-a[i+1]);
                if(x<=1)
                {
                    c--;
                }
                if(x>1)
                {
                    break;
                }
            }
            if(c==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        if(y==0)
            cout<<"YES"<<endl;
    }
}
