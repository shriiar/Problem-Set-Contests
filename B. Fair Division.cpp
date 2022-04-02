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
        int n, x = 0, y = 0, s = 0;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int z;
            cin >> z;
            if(z==1)
                x++;
            else
                y++;
            s += z;
        }
        if(s%2==0)
        {
            int p, q;
            if(y%2!=0)
                p = y / 2 + 1;
            else
                p = y / 2;
            y -= p;
            p *= 2;
            if(y<=0)
                q = 0;
            else
                q = y * 2;
            while(1)
            {
                if(x==0)
                    break;
                if(p==q)
                    break;
                q += 1;
                x--;
            }
            if(x>0 && x%2==0)
                cout<<"YES"<<endl;
            else if(p==q)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
