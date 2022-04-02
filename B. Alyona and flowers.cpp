#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, s = 0;
    cin >> n >> m;
    vector <int> v;
    v.push_back(0);
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    while(m--)
    {
        int y = 0,a ,b;
        cin >> a >> b;
        for(int i=a; i<=b; i++)
            y += v[i];
        if(y>=0)
            s += y;
        y = 0;
    }
    cout<<s<<endl;
}
