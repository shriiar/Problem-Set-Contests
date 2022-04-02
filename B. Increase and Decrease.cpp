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
    sort(v.begin(), v.end());
    int s = v[n-1];
    if(s>=0)
    {
        for(int i=0; i<n-1; i++)
        {
            if(v[i]<0)
                s -= abs(v[i]);
            else
                s += v[i];
        }
    }
    else
    {
        for(int i=0; i<n-1; i++)
            s -= v[i];
    }
    if(s%n==0)
        cout<<n<<endl;
    else
        cout<<n-1<<endl;
}
