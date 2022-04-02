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
        int n, a, b, c, d, x, y;
        cin >> n >> a >> b >> c >> d;
        x = (a - b) * n;
        y = (a + b) * n;
        if(y>=(c-d) && x<=(c+d))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
