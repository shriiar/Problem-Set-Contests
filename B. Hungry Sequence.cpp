#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(i<n-1)
            cout<<i+n<<" ";
        else
            cout<<i+n<<endl;
    }
}
