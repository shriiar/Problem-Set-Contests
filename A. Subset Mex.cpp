#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(101, 0);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
        }
        int c = 0, y = 0;
        bool f = true;
        for(int i=0; i<=100; i++)
        {
            if(c==2)
                break;
            if(v[i]==0)
            {
                y += i;
                if(f==true)
                {
                    y += i;
                    break;
                }
                c++;
            }
            else if(v[i]==1 && f==true)
            {
                y += i;
                c++;
                f = false;
            }
        }
        cout<<y<<endl;
    }
}
