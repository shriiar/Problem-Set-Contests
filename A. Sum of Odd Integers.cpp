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
        int n, k;
        cin >> n >> k;
        if((k*k<=n) || (n%2 == k%2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
