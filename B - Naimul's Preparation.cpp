#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    long long s = 0, z;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        s += x;
    }
    z = n - s;
    if(z<0)
        cout<<"-1"<<endl;
    else
        cout<<z<<endl;
}
