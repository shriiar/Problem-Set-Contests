#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    for(int i=0; i<k; i++)
    {
        if(n%10==0)
        {
            n = n / 10;
        }
        else if(n%10!=0)
            n--;
    }
    cout<<n<<endl;
}
