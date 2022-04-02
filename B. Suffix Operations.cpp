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
        vector <long long> v;
        set <long long> s;
        for(int i=0; i<n; i++)
        {
            long long int x;
            cin >> x;
            s.insert(x);
            v.push_back(x);
        }
        if(s.size()==1)
            cout<<"0"<<endl;
        else
        {
            long long int w = 0, x, y = 0, z = 0, p, q, a = -1e8-1, b = 1e8+1, c = 0, d, e, r = 0;
            bool f = true;
            x = v[0], w = abs(v[0]);
            for(int i=1; i<n; i++)
            {
                if(abs(v[i]-0)<w)
                {
                    x = v[i];
                    y = i;
                    w = abs(v[i]-0);
                }
            }
            w = abs(v[0]), z = v[0];
            for(int i=1; i<n; i++)
            {
                if(abs(v[i]-0)>w)
                {
                    z = v[i];
                    r = i;
                    w = abs(v[i]-0);
                }
            }
            for(int i=0; i<v.size(); i++)
            {
                if(i==y || i==r)
                    continue;
                else
                {
                    if((x>0 && v[i]<0) || (x<0 && v[i]>0))
                    {
                        c += abs(0 - v[i]);
                        c += abs(0 - x);
                    }
                    else
                    {
                        c += abs(x - v[i]);
                    }
                }
            }
            cout<<c<<endl;
        }
    }
}
