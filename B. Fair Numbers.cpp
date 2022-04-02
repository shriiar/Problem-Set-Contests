#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, x, y;
        cin >> n;
        x = n;
        while(1)
        {
            bool f = true;
            while(x!=0)
            {
                int z = x % 10;
                x /= 10;
                if(z!=0 && n%z!=0)
                {
                    f = false;
                    break;
                }
            }
            if(f==false)
            {
                n++;
                x = n;
            }
            else if(f==true)
                break;
        }
        cout<<n<<endl;
    }
}
