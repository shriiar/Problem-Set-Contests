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
        int n, x, f = 0, a = 0, c = 0;
        cin >> n >> x;
        if(n==1 || n==2)
            cout<<"1"<<endl;
        else
        {
            n -= 2;
            int m = (n/x)+1;
            if(n%x)
                m++;
            cout<<m<<endl;
        }
    }
}
