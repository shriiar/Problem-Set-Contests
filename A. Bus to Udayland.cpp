#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    char a[n][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
            cin >> a[i][j];
    }
    bool f = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(n==2)
                continue;
            else if(a[i][j]=='O' && a[i][j+1]=='O')
            {
                a[i][j] = '+';
                a[i][j+1] = '+';
                f = false;
                break;
            }
        }
        if(f==false)
            break;
    }
    if(f==true)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
                cout << a[i][j];
            cout<<endl;
        }
    }
}
