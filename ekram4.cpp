#include <bits/stdc++.h>
using namespace std;
signed main()
{
    vector <bool> b(1e6 + 3, 1);
    b[0] = 0, b[1] = 0;
    for(int i = 2; i * i <= 1000003; i++)
    {
        for(int j = i * i; j <= 1000003; j += i)
        {
            b[j] = 0;
        }
    }
    long long n;
    while(cin >> n)
    {
        bool f = 1;
        vector<int> v;
        long long res = n;
        for(int i = 2; i * i <= n; i++)
        {
            if(b[i] && n % i == 0)
            {
                int c = 0;
                while(n % i == 0)
                {
                    n /= i;
                    c++;
                }
                if(c > 1)
                {
                    f = 0;
                    break;
                }
                else v.push_back(i);
            }
        }
        if(f && n != res) cout << res << " is a marvelous number, factors are " << v[0] << " and " << n << endl;
        else  cout << res << " is not a marvelous number" << endl;
    }
    return 0;
}