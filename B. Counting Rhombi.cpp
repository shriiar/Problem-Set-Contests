#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int w, h;
    cin >> w >> h;
    if(w==1 || h==1)
        cout<<"0"<<endl;
    else
        cout<<(w-1)*(h-1)+1<<endl;
}
