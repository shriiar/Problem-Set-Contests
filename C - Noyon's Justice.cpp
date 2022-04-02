#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, s = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        long long int x;
        cin >> x;
        s += x;
    }
    if(s%n==0)
        cout<<n<<endl;
    else
        cout<<n-1<<endl;
}
