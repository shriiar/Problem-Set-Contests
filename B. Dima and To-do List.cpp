#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector <int> v;
    vector <int> b;
    v.push_back(0);
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if(k==1)
        cout<<"1"<<endl;
    else if(k==n)
        cout<<(min_element(v.begin()+1, v.end()) - v.begin())<<endl;
    else
    {
        int x, z, c = 0;
        vector <int> b;
        for(int i=1; i<=k; i++)
        {
            c = 0;
            for(int j=i; j<=n; j+=k)
                c += v[j];
            b.push_back(c);
        }
        z = (min_element(b.begin(), b.end()) - b.begin());
        cout<<z+1<<endl;
    }
}
