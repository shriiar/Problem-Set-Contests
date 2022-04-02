#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, c = 0;
    cin >> n;
    vector <int> v(101, 0);
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    for(int i=1; i<=100; i++)
    {
        if(v[i]>=4)
        {
            c += v[i] / 4;
            v[i] = v[i] % 4;
        }
    }
    for(int i=1; i<=100; i++)
    {
        if(v[i]>=2)
        {
            for(int j=i+1; j<=100; j++)
            {
                if(v[j]>=2)
                {
                    c++;
                    v[i] -= 2;
                    v[j] -= 2;
                    j++;
                    break;
                }
            }
        }
    }
    cout<<c<<endl;
}
