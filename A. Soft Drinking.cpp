#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = (k*l)/nl;
    int y = c * d;
    int z = p / np;
    cout<<(min(x, min(y, z)))/n<<endl;
}
