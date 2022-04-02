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
        int n, k, p, s = 0, y, z;
        bool f = true;
        cin >> n >> k;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
            s += v[i];
            if(v[i]/s>k/100)
            {
                int c = 1;
                while(1)
                {
                    if(z/s<=k/100)
                        break;
                    y = v[i] + c;
                }
            }
        }
    }
}
