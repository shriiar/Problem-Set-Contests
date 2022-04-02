#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i; j<n-1; j++)
        {
            int q,s, x, y;
            x = v[j];
            y = v[j+1];
            s = (x+y+1) / 2;
            q = sqrt(s*(s-x)*(s-y)*(s-1));
            cout<<q<<endl;
        }
    }
}
