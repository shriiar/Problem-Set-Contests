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
        double n, x, s = 0, maxx = 0, minn = 0;
        cin >> n >> x;
        for(int i=0; i<n; i++)
        {
            double z, p;
            cin >> z;
            s += z;
            maxx += (ceil(z/x));
        }
        minn = ceil(s/x);
        long long p, q;
        p = minn, q = maxx;
        cout<<p<<" "<<q<<endl;
    }
}
