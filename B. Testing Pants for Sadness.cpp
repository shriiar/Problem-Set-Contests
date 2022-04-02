#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long int s = 0, x, y;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        y = x - 1;
        s += (y*i) + 1;
    }
    cout<<s<<endl;
}
