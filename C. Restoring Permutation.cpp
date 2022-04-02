#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, p;
        cin >> n;
        p = 2*n;
        bool f = true, h = true;
        std::vector<int>::iterator it;
        vector <int> v;
        vector <int> b(p+1, 0);
        vector <int> r;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            b[x] = 1;
            if(x+1>p)
                f = false;
            v.push_back(x);
        }
        if(f==true)
        {
            for(int i=0; i<n; i++)
            {
                int q = v[i]+1;
                it = find(b.begin()+q, b.end(), 0);
                if(it != b.end())
                {
                    q = distance(b.begin(), it);
                    b[q] = 1;
                    r.push_back(v[i]);
                    r.push_back(q);
                }
                else
                {
                    h = false;
                    break;
                }
            }
            if(h==true)
            {
                for(int i=0; i<r.size(); i++)
                    cout<<r[i]<<" ";
                cout<<endl;
            }
            else
                cout<<-1<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
