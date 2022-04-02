#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, s = 0;
    cin >> n;
    for(int i=1; i<=n; i++)
        s += i;
    cout<<s<<endl;
}
