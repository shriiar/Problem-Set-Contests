#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vb vector <bool>
#define vl vector <long long>
#define vp vector <make_pair<int, int>>
#define vv vector <vector<int>>
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int binarySearch(vi &v, int n, int y)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (y == v[mid]) {
            return mid;
        }
        else if (y < v[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    Fastio;
    int n, x; cin >> n >> x;
    vi v; vi b(1e5+3, 0); vi t(1e5+3, 0); bool f = false;
    for(int i=0; i<n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
        b[z]++;
    }
    sort(v.begin(), v.end()); sort(b.rbegin(), b.rend());
    for(int i=0; i<=1e5; i++)
    {
        if(b[i]>=2)
        {
            f = true;
            break;
        }
    }
    if(f) cout<<0<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            int y = v[i] & x;
            t[y]++;
            int index = binarySearch(v, n, y);
            if(index!=-1 && index!=i)
            {
                cout<<1<<endl;
                return 0;
            }
        }
        sort(t.rbegin(), t.rend());
        for(int i=0; i<=1e5; i++)
        {
            if(t[i]>=2)
            {
                f = true;
                break;
            }
        }
        if(f) cout<<2<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
