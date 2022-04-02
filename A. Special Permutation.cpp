#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%2==0)
        {
            for(int i=n; i>=1; i--)
            {
                if(i>1)
                    cout<<i<<" ";
                else
                    cout<<i<<endl;
            }
        }
        else
        {
            int x = n / 2;
            x += 1;
            for(int i=n; i>x; i--)
                cout<<i<<" ";
            for(int i=1; i<=x; i++)
            {
                if(i<x)
                    cout<<i<<" ";
                else
                    cout<<i<<endl;
            }
        }
    }
}
