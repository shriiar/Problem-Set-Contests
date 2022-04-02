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
        long long w, h, n, x;
        x = 1;
        cin >> w >> h >> n;
        if(w%2==0)
        {
            while(w%2==0)
            {
                w /= 2;
                x *= 2;
            }
        }
        if(h%2==0)
        {
            while(h%2==0)
            {
                h /= 2;
                x *= 2;
            }
        }
        if(x>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
