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
        int n, m;
        cin >> n >> m;
        vector <int> a;
        vector <int> b;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i=0; i<m; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        bool f = true;
        if(n<m)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(a[i]==b[j])
                    {
                        cout<<"YES"<<endl;
                        cout<<"1 "<<a[i]<<endl;
                        f = false;
                        break;
                    }
                }
                if(f==false)
                    break;
            }
            if(f==true)
                cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(b[i]==a[j])
                    {
                        cout<<"YES"<<endl;
                        cout<<"1 "<<b[i]<<endl;
                        f = false;
                        break;
                    }
                }
                if(f==false)
                    break;
            }
            if(f==true)
                cout<<"NO"<<endl;
        }
    }
}
