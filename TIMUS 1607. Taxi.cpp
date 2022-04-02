#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        int a, b, c, d, x = 0;
        cin >> a >> b >> c >> d;
        while(true)
        {
            if(a + b*x >= c - d*x)
            {
                cout<<a+(b*x)<<endl;
                break;
            }
            else if(a + b*(x+1) >= c - (d*x))
            {
                cout<<c-(d*x)<<endl;
                break;
            }
            x++;
        }
    }
}
