#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    while(cin >> n >> k)
    {
        int c=0, b = 0;
        while(n>0)
        {
            c+=n;
            b+=n;
            n=b/k;
            b=b%k;

        }
cout<<c<<" "<<b<<" "<<n<<" "<<endl;
    }
}
