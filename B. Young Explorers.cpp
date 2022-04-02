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
        int n, k;
        cin >> n;
        vector <int> v(n+1, 0);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
        }
        long long c = 0, s = 0;
        for(int i=1; i<=n; i++)
        {
            c += (v[i]/i);
            v[i] %= i;
        }
        for(int i=1; i<=n; i++)
        {
            s += v[i];
            c += (s/i);
            s %= i;
        }
        cout<<c<<endl;
    }
}
