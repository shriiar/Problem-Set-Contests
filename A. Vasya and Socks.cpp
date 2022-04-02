#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c=1;
    cin >> n >> m;
    while(n!=0)
    {
        if(c%m==0 && c!=0)
            n++;
        n--;
        c++;
    }
    cout<<c-1<<endl;
}
