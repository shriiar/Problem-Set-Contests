#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vl vector <long long>
#define vp vector <make_pair
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    int t;  cin >> t;
    while(t--)
    {
        int n, k, o = 0; cin >> n >> k;
        vl v;
        for(int i=0; i<n; i++)
        {
            ll x; cin >> x;
            if(x%2!=0) o++;
            v.pb(x);
        }
        if(o<k || (o-k)%2!=0) cout<<"NO"<<endl;
        else
        {
            k--;
            cout<<"YES"<<endl;
            for(int i=0; i<n && k>0; i++)
            {
                if(v[i]%2!=0)
                {
                    k--;
                    cout<<i+1<<" ";
                }
            }
            cout<<n<<endl;
        }
    }
    return 0;
}
