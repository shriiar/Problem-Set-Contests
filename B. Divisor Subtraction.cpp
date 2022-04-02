#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, c = 0, d = 0;
    cin >> n;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            d++;
            break;
        }
    }
    if(d==0)
        cout<<1<<endl;
    else
    {
        if(n%2==0)
            cout<<n/2<<endl;
        else
        {
            bool f = true;
            for (int i=3; i<=sqrt(n); i+=2)
            {
                while (n%i==0)
                {
                    n -= i;
                    f = false;
                    break;
                }
                if(f==false)
                    break;
            }
            cout<<1+(n/2)<<endl;
        }
    }
}
