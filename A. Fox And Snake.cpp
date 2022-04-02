#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    bool y=true;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=m; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%2==0 && y==true)
        {
            for(int j=1; j<=m; j++)
            {
                if(j==m)
                    cout<<"#";
                else
                    cout<<".";
            }
            y=false;
            cout<<endl;
        }
        else if(i%2==0 && y==false)
        {
            for(int j=1; j<=m; j++)
            {
                if(j==1)
                    cout<<"#";
                else
                    cout<<".";
            }
            y=true;
            cout<<endl;
        }
    }
}
