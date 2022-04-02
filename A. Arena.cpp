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
        int n, c = 0;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<n; i++)
        {
            if(v[i]>v[0])
                c++;
        }
        cout<<c<<endl;
    }
}
