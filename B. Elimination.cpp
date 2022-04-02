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
        int a, b, c, d, x, y;
        cin >> a >> b >> c >> d;
        x = a + b;
        y = c + d;
        int z = max(x, y);
        cout<<z<<endl;
    }
}
