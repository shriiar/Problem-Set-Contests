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
        int c, m, x, res = 0;
        cin >> c >> m >> x;
        cout<<min(min(c, m), (c+m+x)/3)<<endl;
    }
}
