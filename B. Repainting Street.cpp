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
        int n, k;
        cin >> n >> k;
        vector <int> v;
        v.push_back(0);
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int c = 1e8;
        for(int i=1; i<101; i++)
        {
            int x = 1, y = 0;
            while(x<=n)
            {
                if(v[x] != i)
                {
                    x += k;
                    y++;
                }
                else
                    x++;
            }
            c = min(c, y);
        }
        cout<<c<<endl;
    }
}
