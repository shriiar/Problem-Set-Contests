#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x=0, y=0, z=0;
    cin >> n;
    vector <int> a;
    vector <bool> b(n, 0);
    for(int i=0; i<n; i++)
    {
        int k;
        cin >> k;
        if(k==1)
            x++;
        else if(k==2)
            y++;
        else
            z++;
        a.push_back(k);
    }
    if(x!=0 && y!=0 && z!=0)
    {
        int l = min(x, min(y, z)), c=1, m=1, s=0, t=0, u=0;
        cout<<l<<endl;
        bool f = true;
        while(f==true)
        {
            if(m>l)
            {
                f = false;
            }
            if(f==true)
            {
                for(int i=0; i<n; i++)
                {
                    if(c==1 && c==a[i] && b[i]==0)
                    {
                        s = i+1;
                        b[i] = 1;
                        c++;
                        break;
                    }
                    else if(c==2 && c==a[i] && b[i]==0)
                    {
                        t = i+1;
                        b[i] = 1;
                        c++;
                        break;
                    }
                    else if(c==3 && c==a[i] && b[i]==0)
                    {
                        u = i+1;
                        b[i] = 1;
                    }
                    if(s!=0 && t!=0 && u!=0)
                    {
                        cout<<s<<" "<<t<<" "<<u<<endl;
                        s = 0;
                        t = 0;
                        u = 0;
                        c = 1;
                        m++;
                        f = true;
                        break;
                    }
                }
            }
        }
    }
    else
        cout<<"0"<<endl;
}
