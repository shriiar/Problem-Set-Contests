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
    int i=0, j=n-1;
    while(i<n && j>=0)
    {
        if(v[i]>v[j])
        {
            cout<<"1 ";
            j--;
        }
        else if(v[i]<v[j])
        {
            cout<<"2 ";
            i++;
        }
        else
        {
            cout<<"0 ";
            i++;
            j--;
        }
    }
}
