#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, x, y, n, z;
        cin >> a >> b >> x >> y >> n;
        if(n%2!=0)
        {
            if(a-n<x && b-n>=y)
                cout<<a*(b-n)<<endl;
            else
                cout<<b*(a-n)<<endl;
        }
        else
        {
            int z = n / 2;
            if(a-z>=x && b-z>=y)
                cout<<(a-z)*(b-z)<<endl;
            else if(a-z<x && b-z>=y)
                cout<<a*(b-n)<<endl;
            else
                cout<<b*(a-n)<<endl;

        }
    }
}
