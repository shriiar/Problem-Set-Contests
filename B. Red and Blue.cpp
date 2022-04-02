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
        int n, m, s = 0;
        vector <int> r;
        vector <int> b;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            s += x;
            r.push_back(s);
        }
        cin >> m;
        s = 0;
        for(int i=0; i<m; i++)
        {
            int x;
            cin >> x;
            s += x;
            b.push_back(s);
        }
        int y = *max_element(r.begin(), r.end());
        int z = *max_element(b.begin(), b.end());
        int a = y + z;
        int q = max(a, max(y, z));
        if(q>0)
            cout<<q<<endl;
        else
            cout<<"0"<<endl;
    }
}
