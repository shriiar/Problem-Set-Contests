#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a;
        vector <int> b;
        vector <int> c;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            c.push_back(x);
        }
        vector <int> z;
        for(int i=0; i<n; i++)
        {
            z.push_back(a[i]);
            z.push_back(b[i]);
            z.push_back(c[i]);
        }
        for(int i=0; i<n; i++)
            cout<<z[i]<<" ";
        cout<<endl;
    }
}
