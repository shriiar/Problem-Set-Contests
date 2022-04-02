#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c = 0;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if(a<b)
            c++;
    }
    if(c!=0)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
}
