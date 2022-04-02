#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y = 1;
    cin >> n;
    x = n;
    long long s = 0;
    while(x!=0)
    {
        x--;
        s += (x*y);
        y++;
    }
    s += n;
    cout<<s<<endl;
}
