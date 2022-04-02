#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>a;
        vector<int>b;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            int y;
            cin >> y;
            b.push_back(y);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        int c=1, sum = 0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]<b[i] && c<=k)
            {
                swap(a[i], b[i]);
                c++;
            }
            sum += a[i];
        }
        cout<<sum<<endl;
    }
}
