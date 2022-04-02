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
        int n, x;
        cin >> n >> x;
        vector <int> v;
        vector <int> b;
        for(int i=0; i<n; i++)
        {
            int y;
            cin >> y;
            v.push_back(y);
        }
        for(int i=0; i<n; i++)
        {
            int y;
            cin >> y;
            b.push_back(y);
        }
        reverse(b.begin(), b.end());
        if(b[0]>=x)
            cout<<"NO"<<endl;
        else
        {
            bool f = true;
            for(int i=0; i<n; i++)
            {
                if(v[i]+b[i]>x)
                {
                    f = false;
                    break;
                }
            }
            if(f==true)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
