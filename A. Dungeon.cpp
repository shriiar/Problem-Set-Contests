#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, c, s, x;
        cin >> a >> b >> c;
        s = a + b + c;
        x = s / 9;
        if(s%9==0 && a>=x && b>=x && c>=x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
