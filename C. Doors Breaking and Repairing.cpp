#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x, y, c = 0;
    cin >> n >> x >> y;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    if(x<=y)
    {
        bool f = true;
        for(int i=0; i<n; i++)
        {
            if(v[i]<=x)
                c++;
        }
        if(c%2==0)
            cout<<c/2<<endl;
        else
            cout<<(c/2)+1<<endl;
    }
    else
        cout<<n<<endl;
}
