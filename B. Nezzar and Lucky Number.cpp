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
        long long int n, k;
        cin >> n >> k;
        while(n--)
        {
            long long x;
            cin >> x;
            if(x>=k*10)
                cout<<"YES"<<endl;
            else
            {
                bool f = true;
                while(x>=k)
                {
                    if(x%k==0)
                    {
                        f = false;
                        break;
                    }
                    x -= 10;
                }
                if(f==false)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
}
