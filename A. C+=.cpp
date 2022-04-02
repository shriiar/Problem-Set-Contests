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
        long long int a, b, n, c = 0;
        cin >> a >> b >> n;
        bool f = true;
        while(a<=n && b<=n)
        {
            if(b<a)
                b += a;
            else
                a += b;
            c++;
        }
        cout<<c<<endl;
    }
}
