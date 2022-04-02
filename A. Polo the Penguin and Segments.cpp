#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, l, r;
    cin >> n >> k;
    int x = 0;
    for(int i=0; i<n; i++)
    {
        cin >> l >> r;
        x = x + ((r - l) + 1);
    }
    if(x%k==0)
        cout<<"0"<<endl;
    else
    {
        int y = (k - (x % k)) % k;
        cout<<y<<endl;
    }
}
