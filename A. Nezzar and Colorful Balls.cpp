#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(101, 0);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
        }
        cout<<*max_element(v.begin(), v.end())<<endl;
    }
}
