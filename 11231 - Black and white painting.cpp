#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, c;
    while(cin >> n >> m >> c)
    {
        if(n==0 || m==0)
            break;
        else
        {
            if(c==0)
                cout<<((n-7)*(m-7))/2<<endl;
            else
                cout<<((n-7)*(m-7)+1)/2<<endl;
        }
    }
}
