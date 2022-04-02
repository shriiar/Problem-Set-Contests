#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n==1)
    {
        int x;
        cin >> x;
        if(x==1)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    else
    {
        vector <int> v;
        int y = 0, z = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x==1)
                y++;
            if(x==0)
                z++;
            v.push_back(x);
        }
        cout<<y<<" "<<z<<endl;
        if(y==n && z==0)
            cout<<y-1<<endl;
        else if(y>=z)
        {
            int x, c = 0, d = 0;
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]==0)
                    c++;
                else
                {
                    if(c>d)
                    {
                        d = c;
                        c = 0;
                    }
                }
            }
            if(c>d)
                d = c;
            cout<<y+d<<endl;
        }
        else
        {
            if(v[0]==1 || v[n-1]==1)
                cout<<z+1<<endl;
            else
                cout<<z<<endl;
        }
    }
}
