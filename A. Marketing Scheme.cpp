#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long int l, r;
        cin >> l >> r;
        if(l*2>r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
