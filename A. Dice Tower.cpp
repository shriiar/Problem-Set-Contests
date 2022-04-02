#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, f, l, r;
    cin >> t >> f;
    int x = 7 - f;
    bool g = true;
    while(t--)
    {
        cin >> l >> r;
        if((x==l || x==r) || (f==l || f==r))
            g = false;
    }
    if(g==true)
        cout<<"YES"<<endl;
    if(g==false)
        cout<<"NO"<<endl;
}
