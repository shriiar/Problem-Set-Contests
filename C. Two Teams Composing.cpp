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
        int n;
        cin >> n;
        vector <int> v;
        vector <int> b (n+1, 0);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            b[x]++;
        }
        if(n==1)
            cout<<"0"<<endl;
        else
        {
            int c = 0;
            for(int i=1; i<n; i++)
            {
                if(b[i]==1)
                    c++;
            }
            int d = 0, x = 1;
            for(int i=1; i<n; i++)
            {
                if(b[i]>x)
                {
                    x = b[i];
                    d++;
                }
            }
            if(d!=0 && c!=0)
                cout<<x-1<<endl;
            else
                cout<<"1"<<endl;
        }
    }
}
