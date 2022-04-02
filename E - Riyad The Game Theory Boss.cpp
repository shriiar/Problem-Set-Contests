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
        int n;
        cin >> n;
        vector <int> v(n+1, 0);
        vector <int> b;
        b.push_back(0);
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            v[x]++;
        }
        bool f = true;
        int y;
        for(int i=1; i<=n; i++)
        {
            if(v[i]==1)
            {
                f = false;
                y = i;
                break;
            }
        }
        if(f==true)
            cout<<"-1"<<endl;
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(y==b[i])
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}
