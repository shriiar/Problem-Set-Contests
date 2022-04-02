#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, y=0;
    cin >> n;
    int s[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0; i<14; i++)
    {
        if(n%s[i]==0)
        {
            y=1;
            break;
        }
    }
    if(y==1)
        cout<<"YES"<<endl;
    if(y==0)
        cout<<"NO"<<endl;
}
