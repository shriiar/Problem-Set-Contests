#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    bool prime(int n, m)
    {
        if(!prime(m))
            return false;
        else
        {
            for(int i=n+1; i<m; i++)
            {
                if(prime(i))
                    return false;
                else
                    return true;
            }
        }
        if(prime(n, m))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
