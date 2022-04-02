#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f front
#define p pop
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, c=0;
    cin >> n;
    queue <int> q;
    queue <int> u;
    for(ll i=0; i<n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    for(ll i=0; i<n; i++)
    {
        int x;
        cin >> x;
        u.push(x);
    }
    while(!q.empty() && !u.empty())
    {
        ll x = q.f();
        ll y = u.f();
        if(x!=y)
        {
            q.p();
            q.push(x);
            c++;
        }
        else
        {
            q.p();
            u.p();
            c++;
        }
    }
    cout<<c<<endl;
}
