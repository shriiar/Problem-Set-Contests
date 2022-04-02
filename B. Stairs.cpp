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
        long long int x, y = 2, c = 0;
        cin >> x;
        while(1)
        {
            if(y>x)
                break;
            c++;
            y *= 2 -1;
        }
    }
}
