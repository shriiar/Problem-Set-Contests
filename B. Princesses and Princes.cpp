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
        int n, p = -1, c = 1, q;
        cin >> n;
        vector <bool> b(n+1, 0);
        bool f = false, g = false, h = true;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            f = false, g = false;
            while(x--)
            {
                cin >> q;
                if(b[q]==0 && g==false)
                {
                    f = true;
                    g = true;
                    b[q] = 1;
                }
            }
            if(f==false && p==-1)
            {
                p = c;
                h = false;
            }
            c++;
        }
        if(h==true)
            cout<<"OPTIMAL"<<endl;
        else
        {
            cout<<"IMPROVE"<<endl;
            q = 0;
            std::vector<bool>::iterator it;
            it = find(b.begin()+1, b.end(), 0);
            if(it!=b.end())
                q = distance(b.begin()+1, it);
            cout<<p<<" "<<q+1<<endl;
        }
    }
}
