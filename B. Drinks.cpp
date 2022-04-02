#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float a[n], c=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        c += a[i];
    }
    cout<<c/n<<endl;
}
