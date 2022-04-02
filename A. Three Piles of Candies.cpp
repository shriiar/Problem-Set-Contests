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
        long long int x, y;
        vector <long long int> v;
        for(int i=0; i<3; i++)
        {
            long long int z;
            cin >> z;
            v.push_back(z);
        }
        sort(v.begin(), v.end());
        x = v[1];
        y = v[0];
        long long int z = x - y;
        v[2] -= z;
        y += z;
        v[2] /= 2;
        cout<<x+v[2]<<endl;
    }
}
