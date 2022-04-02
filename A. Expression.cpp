#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, k, l, m, n, o, p;
    cin >> a >> b >> c;
    k = a + b + c;
    l = (a + b) * c;
    m = (a * b) + c;
    n = a + (b * c);
    o = a * (b + c);
    p = a * b * c;
    int v = max(k, l);
    int w = max(v, m);
    int x = max(w, n);
    int y = max(x, o);
    int z = max(y, p);
    cout<<z<<endl;
}
