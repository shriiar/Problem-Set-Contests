#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, s;
        cin >> n;
        int x = (2*n) - 1;
        char a[x];
        for(int i=0; i<x; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[n-1];
        }
        cout<<endl;
    }
}
