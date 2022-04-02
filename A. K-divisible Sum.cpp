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
        long long n, k, x = 0, y = 0, c, d = 1;
        cin >> n >> k;
        if(n%k==0)
            cout<<1<<endl;
        else if(k%n==0)
            cout<<k/n<<endl;
        else
        {
            if(n>k)
            {
                while(1)
                {
                    if(x>=n)
                        break;
                    x = k * d;
                    d++;
                }
                c = 1;
                while(1)
                {
                    if(x-n<0)
                        break;
                    x -= n;
                    c++;
                }
                cout<<c<<endl;
            }
            else
            {
                c = 1;
                while(1)
                {
                    if(k-n<0)
                        break;
                    k -= n;
                    c++;
                }
                cout<<c<<endl;
            }
        }
    }
}
