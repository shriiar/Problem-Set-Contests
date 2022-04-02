#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int x = abs(a[n-1]-a[n-2]);
        for(int i=n-2; i>0; i--)
        {
            int y = abs(a[i]-a[i-1]);
            if(y<x)
                x = y;
        }
        cout<<x<<endl;
    }
}
