#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, y;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if(n==1)
    {
        if(a[0]==0)
            cout<<"EASY"<<endl;
        else
            cout<<"HARD"<<endl;
    }
    else
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==0 && a[i+1]==0)
            {
                y=1;
            }
            else
            {
                y=0;
                break;
            }
        }
        if(y==1)
            cout<<"EASY"<<endl;
        if(y==0)
            cout<<"HARD"<<endl;
    }
}
