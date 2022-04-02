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
        long long int a, b, c;
        cin >> a >> b;
        c = (b-1)/(a-1);
        cout<<b+c<<endl;
    }
}
