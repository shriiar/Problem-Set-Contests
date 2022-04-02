
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    bool f = true;
    sort(v.begin(), v.end());
    for(int i=0; i<n-2; i++)
    {
        if(v[i]+v[i+1]>v[i+2])
        {
            cout<<"YES"<<endl;
            f = false;
            break;
        }
    }
    if(f==true)
        cout<<"NO"<<endl;
}
