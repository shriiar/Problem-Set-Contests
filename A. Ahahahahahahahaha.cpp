#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, z=0, o=0;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x==0)
                z++;
            else
                o++;
            v.push_back(x);
        }
        if(z>=o)
        {
            cout<<n/2<<endl;
            for(int i=0; i<(n/2); i++)
            {
                cout<<"0 ";
            }
        }
        else
        {
            int x = n / 2;
            if(x%2==0)
            {
                cout<<x<<endl;
                for(int i=0; i<x; i++)
                    cout<<"1 ";
            }
            else
            {
                x++;
                cout<<x<<endl;
                for(int i=0; i<x; i++)
                    cout<<"1 ";
            }
        }
        cout<<endl;
    }
}
