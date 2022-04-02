#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> v;
    v.push_back(0);
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int m, w, b;
    cin >> m;
    while(m--)
    {
        cin >> w >> b;
        if(w==1)
        {
            int x = v[w] - b;
            if(n>1)
                v[w+1] += x;
            v[w] = 0;
        }
        else if(w==n)
        {
            int x = v[w] - b;
            v[w] -= (x+1);
            v[w-1] += v[w];
            v[w] = 0;
        }
        else
        {
            int x = v[w] - b;
            v[w] -= (x+1);
            v[w+1] += x;
            v[w-1] +=  v[w];
            v[w] = 0;
        }
    }
    for(int i=1; i<=n; i++)
        cout<<v[i]<<endl;
}
