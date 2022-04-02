#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c, w, x, y, z;
    cin >> a >> b >> c;
    w = (a+a) + (b+b);
    x = a + c + b;
    y = a + c + c + a;
    z = b + c + c + b;
    cout<<min(w, min(x, min(y, z)))<<endl;;
}
