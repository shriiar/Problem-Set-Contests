#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int long long n, t, c;
    cin >> n >> t >> c;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    long long x = c, y, z = 0;
    bool f = true;
    for(int i=0; i<=n-c; i++)
    {
        if(v[i]<=t)
        {
            y = i+1;
            x--;
            while(x--)
            {
                if(v[y]<=t)
                    y++;
                else
                {
                    f = false;
                    break;
                }
            }
            if(f==true)
                z++;
            f = true;
            x = c;
        }
    }
    cout<<z<<endl;
}
