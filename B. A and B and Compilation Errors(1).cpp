#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x=0, y=0, z=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int j;
        cin >> j;
        x+=j;
    }
    for(int i=0; i<n-1; i++)
    {
        int j;
        cin >> j;
        y+=j;
    }
    for(int i=0; i<n-2; i++)
    {
        int j;
        cin >> j;
        z+=j;
    }
    cout<<x-y<<endl<<y-z<<endl;
}
