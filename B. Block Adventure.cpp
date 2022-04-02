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
        int n, m, k, x;
        cin >> n >> m >> k;
        vector <int> v;
        bool f = true;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if(n==1)
            cout<<"YES"<<endl;
        else
        {
            for(int i=0; i<n-1; i++)
            {
                m += v[i];
                if(max(v[i+1]-k, 0) > m)
                {
                    f = false;
                    break;
                }
                m -= max(v[i+1]-k, 0);
            }
            if(f==true)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
