#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, x, s = 0, y, p, q, c = 0;
    bool f = true;
    cin >> n >> x;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        long long int z;
        cin >> z;
        s += z;
        v.push_back(z);
    }
    if(s>=x)
    {
        sort(v.begin(), v.end());
        y = v[0];
        for(int i=n-1; i>=0; i--)
        {
            if(x<=0)
            {
                f = false;
                break;
            }
            q = v[i] - y;
            x -= q;
        }
        if(f==false)
            cout<<y<<endl;
        else
        {
            if(x<n)
                cout<<y-1<<endl;
            else
            {
                p = x / n;
                y -= p;
                if(x%n!=0)
                    cout<<y-1<<endl;
                else
                    cout<<y<<endl;
            }
        }
    }
    else
        cout<<-1<<endl;
}
