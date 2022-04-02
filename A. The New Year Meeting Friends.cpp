#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int a = min(x, y);
    int b = min(a, z);
    int c = max(x, y);
    int d = max(c, z);
    cout<<abs(b-d)<<endl;
}
