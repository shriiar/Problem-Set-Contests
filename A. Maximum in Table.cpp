#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==1 || n==2)
    {
        cout<<n<<endl;
    }
    else
    {
        vector <int> a;
        for(int i=0; i<n; i++)
        {
            a.push_back(1);
        }
        vector <int> b;
        for(int i=0, j=1; i<n; i++, j++)
        {
            b.push_back(j);
        }
        int x = n - 2;
        for(int i=1; i<=x; i++)
        {
            for(int i=1; i<n; i++)
            {
                a[i] = b[i]+a[i-1];
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=1; i<n; i++)
            {
                b[i] = a[i]+b[i-1];
                cout<<b[i]<<" ";
            }
            cout<<endl;
            i++;
        }
        if(x%2!=0)
            cout<<a[n-1]<<endl;
        else
            cout<<b[n-1]<<endl;
    }
}
