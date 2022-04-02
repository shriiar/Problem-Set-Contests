#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, c = 0, s = 0;
    cin >> n;
    vector <bool> b(1000003, 0);
    for(int i=0; i<n; i++)
    {
        char x;
        int y;
        cin >> x >> y;
        if(x=='+')
        {
            c++;
            b[y] = 1;
        }
        else
        {
            if(b[y]==1)
            {
                b[y] = 0;
                c--;
            }
            else
                s += 1;
        }
        s = max(c, s);
    }
    cout<<s<<endl;
}
