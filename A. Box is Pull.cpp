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
        long long int x1, y1, x2, y2, x, y, s = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        x = abs(x1 - x2);
        y = abs(y1 - y2);
        if(x==0 && y!=0)
            cout<<y<<endl;
        else if(y==0 && x!=0)
            cout<<x<<endl;
        else if(x==0 && y==0)
            cout<<x<<endl;
        else
        {
            s += (x + y + 2);
            cout<<s<<endl;
        }
    }
}
