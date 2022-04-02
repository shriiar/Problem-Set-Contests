#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d, o, f=0, c=0;
    cin >> n >> b >> d;
    while(n--)
    {
        cin >> o;
        if(o<=b)
        {
            f += o;
            if(f>d)
            {
                c++;
                f = 0;
            }
        }
    }
    cout<<c<<endl;
}
