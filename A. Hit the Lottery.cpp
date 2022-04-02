#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i=0, c=0;
    cin >> n;
    vector <int> v = {100, 20, 10, 5, 1};
    while(n>0)
    {
        if(n>=v[i])
        {
            n -= v[i];
            c++;
        }
        else
            i++;
    }
    cout<<c<<endl;
}
