#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, i, a;
    cin >> n >> k;
    i=(n+1)/2;
    if (k<=i)
        a=2*k-1;
    else
        a=(k-i)*2;
    cout<<a<<endl;
}
