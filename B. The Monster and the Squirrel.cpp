#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, c = 4;
    cin >> n;
    for(int i=3; i<=n; i++)
        c += 4;
    cout<<(n*n)-c<<endl;
}
