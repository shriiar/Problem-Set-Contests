#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        int x = a[0] - '0';
        int s = 0;
        for(int i=1; i<x; i++)
        {
            s += 10;
        }
        if(a.size()==1)
            s += 1;
        else if(a.size()==2)
            s += 3;
        else if(a.size()==3)
            s += 6;
        else if(a.size()==4)
            s += 10;
        cout<<s<<endl;
    }
}
