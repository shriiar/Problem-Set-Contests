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
        int n, p = 0;
        cin >> n;
        bool f = true;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x>=p)
                p = x;
            else
                f = false;
            v.push_back(x);
        }
        if(f==true)
            cout<<"0"<<endl;
        else
        {
            p = n-1;
            while(1)
            {
                if(p==0)
                    break;
                else if(v[p]<=v[p-1])
                    p--;
                else
                    break;
            }
            while(1)
            {
                if(p==0)
                    break;
                else if(v[p]>=v[p-1])
                    p--;
                else
                    break;
            }
            cout<<p<<endl;
        }
    }
}
