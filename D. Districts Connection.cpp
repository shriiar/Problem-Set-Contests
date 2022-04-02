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
        int n, y, z;
        cin >> n;
        vector <int> v;
        vector <int> b(n, 0);
        set <int> s;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            s.insert(x);
        }
        if(s.size()==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            b[0] = 1;
            z = 0;
            for(int i=0; i<n; i++)
            {
                if(v[0]!=v[i])
                {
                    cout<<z+1<<" "<<i+1<<endl;
                    b[i] = 1;
                }
            }
            while(1)
            {
                bool f = true;
                for(int i=0; i<n; i++)
                {
                    if(b[i]==0)
                    {
                        f = false;
                        break;
                    }
                }
                if(f==true)
                    break;
                else
                {
                    for(int i=0; i<n; i++)
                    {
                        if(v[z]!=v[i])
                        {
                            z = i;
                            break;
                        }
                    }
                    for(int i=0; i<n; i++)
                    {
                        if(v[z]!=v[i] && b[i]==0)
                        {
                            cout<<z+1<<" "<<i+1<<endl;
                            b[i] = 1;
                        }
                    }
                }
            }
        }
    }
}
