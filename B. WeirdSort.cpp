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
        int n, m;
        cin >> n >> m;
        vector <int> v;
        vector <int> p;
        vector <bool> b(n, 0);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i=0; i<m; i++)
        {
            int x;
            cin >> x;
            x -= 1;
            p.push_back(x);
            b[x] = 1;
        }
        sort(p.begin(), p.end());
        bool f = true;
        while(1)
        {
            f = false;
            for(int i=0; i<m; i++)
            {
                int y = p[i];
                if(v[y]>v[y+1])
                {
                    swap(v[y], v[y+1]);
                    f = true;
                }
            }
            if(f==false)
                break;
        }
        f = true;
        for(int i=0; i<n-1; i++)
        {
            if(b[i]==0)
            {
                if(v[i]>v[i+1])
                {
                    f = false;
                    break;
                }
            }
        }
        if(f==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
