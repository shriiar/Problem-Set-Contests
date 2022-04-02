#include <bits/stdc++.h>
using namespace std;
int main()
{
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
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        cout<<(upper_bound(v.begin(), v.end(), x) - v.begin())<<endl;
    }
}
