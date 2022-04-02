#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], c=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int i=0;
    for(int j=0; j<n-1; j++)
    {
        if(a[i]!=a[j+1])
        {
            c++;
            i++;
        }
        else
            i++;
    }
    cout<<c+1<<endl;
}
