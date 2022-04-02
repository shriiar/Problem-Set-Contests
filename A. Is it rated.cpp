#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    bool f = true;
    cin >> n;
    vector <int> a;
    vector <int> b;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            f = false;
            cout<<"rated"<<endl;
            break;
        }
    }
    if(f==true)
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i]<a[i+1])
            {
                f = false;
                cout<<"unrated"<<endl;
                break;
            }
        }
        if(f==true)
            cout<<"maybe"<<endl;
    }
}
