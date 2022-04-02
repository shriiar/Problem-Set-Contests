#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, s, t;
    cin >> n >> s >> t;
    vector <int> v;
    v.push_back(0);
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int x = s, c = 0;
    while(x!=t)
    {
        x = v[x];
        c++;
        if(c>n)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<c<<endl;
}
