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
        set <int> s;
        vector <int> v(n+1, 0);
        vector <int> b;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            s.insert(x);
            v[x]++;
        }
        sort(b.begin(), b.end());
        if(s.size()==n)
        {
            vector <int> c(100, 0);
            for(int i=0, j=n-1; i<n && j>=0 && i<j; i++, j--)
            {
                int p = b[i] + b[j];
                c[p]++;
            }
            int q = *max_element(c.begin(), c.end());
            cout<<q<<endl;
        }
        else
        {
            sort(v.rbegin(), v.rend());
            int q = v[0];
            int p = v[1];
            if(q==p)
                cout<<(p+q)/2<<endl;
            else
                cout<<q/2<<endl;
        }
    }
}
