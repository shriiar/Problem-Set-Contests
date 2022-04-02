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
        long long n, x, y, z;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            long long p;
            cin >> p;
            v.push_back(p);
        }
        sort(v.begin(), v.end());
        x = n/2, y = x-1, z = x+1;
        cout<<v[x]<<" "<<v[y]<<" "<<v[z]<<" ";
        y--;
        z++;
        while(1)
        {
            if(y<0 && z>=n)
                break;
            else if(y>-1 && z<n)
            {
                cout<<v[y]<<" "<<v[z]<<" ";
                y--;
                z++;
            }
            else
            {
                cout<<v[y];
                y--;
            }
        }
        cout<<endl;
    }
}
