#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int m = a+b+c+n;
        int s = m / 3;
        if(s>=a && s>=b && s>=c && m%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
