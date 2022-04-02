#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, n;
    cin >> a >> b >> n;
    bool f = true;
    while(1)
    {
        if(f==true)
        {
            if(n==0)
            {
                cout<<"1"<<endl;
                break;
            }
            n -= __gcd(a, n);
            f = false;
        }
        else
        {
            if(n==0)
            {
                cout<<"0"<<endl;
                break;
            }
            n -= __gcd(b, n);
            f = true;
        }
    }
}
