#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, c;
    cin >> n >> m;
    if(n>=m)
    {
        c = (n+1)/2;
        while(1)
        {
            if(c%m==0)
            {
                cout<<c<<endl;
                break;
            }
            c++;
        }
    }
    else
        cout<<"-1"<<endl;
}
