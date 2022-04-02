#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, c = 1, x, y = -1, z = 0, j = 0;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    if(n==1)
        cout<<1<<endl;
    else
    {
        sort(v.begin(), v.end());
        for(int i=1; i<n; i++)
        {
            x = abs(v[z]-v[i]);
            if(x<=5)
            {
                c++;
                j++;
            }
            else
            {
                y = max(c, y);
                z++;
                c = (i-z)+1;
                j = 0;
            }
        }
        if(j!=0)
            y = max(y, c);
        cout<<y<<endl;
    }
}
