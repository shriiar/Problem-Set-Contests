#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
                cout<<j+1<<" "<<j+2<<endl;
            }
        }
    }
}
