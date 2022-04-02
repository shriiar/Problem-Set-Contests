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
    int s = 0, d = 0;
    bool f = true;
    for(int i=0, j=n-1; i<=j;)
    {
        if(f==true)
        {
            if(v[i]>v[j])
            {
                s += v[i];
                i++;
            }
            else
            {
                s += v[j];
                j--;
            }
            f = false;
        }
        else
        {
            if(v[i]>v[j])
            {
                d += v[i];
                i++;
            }
            else
            {
                d += v[j];
                j--;
            }
            f = true;
        }
    }
    cout<<s<<" "<<d<<endl;
}
