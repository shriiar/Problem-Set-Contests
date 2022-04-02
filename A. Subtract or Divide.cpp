#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, x, c = 0;
        cin >> n;
        if(n==1)
            cout<<"0"<<endl;
        else
        {
            while(n>=1)
            {
                if(n%2!=0)
                {
                    n -= 1;
                    c++;
                }
                else
                {
                    x = n / 2;
                    n /= x;
                    c++;
                    if(x==1)
                        break;
                }
            }
            cout<<c<<endl;
        }
    }
}
