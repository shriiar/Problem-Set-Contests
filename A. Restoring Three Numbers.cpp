#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    vector <int> v;
    while(n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int x = v[3]-v[0];
    int y = v[3]-v[1];
    int z = v[3]-v[2];
    cout<<x<<" "<<y<<" "<<z<<endl;
}
