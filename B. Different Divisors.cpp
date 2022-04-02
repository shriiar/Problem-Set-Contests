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
        int d;
        cin >> d;
        int x = d;
        vector <int> v;
        bool f = true;
        while(1)
        {
            x *= 2;
            int c = 0;
            f = true;
            for (int i=1; i<=x/2; i++)
            {
                if(x%i==0)
                    v.push_back(x);
            }
            if(v.size()<4)
                v.clear();
            else
            {
                for(int i=v.size()-1; i>0; i--)
                {
                    if(v[i]-v[i-1]>=d)
                        c++;
                }
                if(c>=4)
                {
                    f = false;
                    break;
                }
                else
                    v.clear();
            }
        }
        if(f==false)
        {
            int e = 4, p = x-1, q;
            while(1)
            {
                f = true;
                int c = 0;
                for (int i=1; i<=p/2; i++)
                {
                    if(x%i==0)
                        v.push_back(x);
                }
                if(v.size()<4)
                    v.clear();
                else
                {
                    for(int i=v.size()-1; i>0; i--)
                    {
                        if(v[i]-v[i-1]>=d)
                            c++;
                    }
                    if(c>=4)
                    {
                        f = false;
                        q = p;
                        break;
                    }
                    else
                    {
                        v.clear();
                        p--;
                        e--;
                    }
                }
            }
            cout<<q<<endl;
        }
    }
}
