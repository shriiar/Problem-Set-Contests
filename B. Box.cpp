#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, j = 0;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int z = v[n-1];
        vector <bool> b(z, 0);
        for(int i=0; i<n; i++)
            b[v[i]] = 1;
        bool g = true;
        for(int i=1; i<n; i++)
        {
            if(v[i]==v[i-1])
            {
                g = false;
                break;
            }
        }
        if(g==true)
        {
            for(int i=0; i<n; i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
        else
        {
            vector <int> r;
            for(int i=1; i<=z; i++)
            {
                if(b[i]==0)
                    r.push_back(i);
            }
            vector <int> p;
            p.push_back(v[0]);
            bool f = true;
            for(int i=1; i<n; i++)
            {
                if((v[i]==v[i-1] && j==r.size()) || (v[i]==v[i-1] && r[j]>v[i]))
                {
                    f = false;
                    break;
                }
                else if(v[i]==v[i-1] && r[j]<v[i])
                {
                    p.push_back(r[j]);
                    j++;
                }
                else
                    p.push_back(v[i]);
            }
            if(f==true)
            {
                for(int i=0; i<p.size(); i++)
                    cout<<p[i]<<" ";
                cout<<endl;
            }
            else
                cout<<-1<<endl;
        }
    }
}
