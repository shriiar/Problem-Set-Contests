#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x=1;
        cin >> n;
        vector <int> a;
        vector <bool> b(n, 0);
        for(int i=0; i<n; i++)
        {
            int y = pow(2, x);
            a.push_back(y);
            x++;
        }
        int m = (n / 2) - 1, k = a[a.size() - 1], l = 0;
        b[n-1] = 1;
        for(int i=0; i<m; i++)
        {
            k += a[i];
            b[i] = 1;
        }
        for(int i=0; i<a.size(); i++)
        {
            if(b[i]==0)
                l += a[i];
        }
        cout<<abs(k-l)<<endl;
    }
}
