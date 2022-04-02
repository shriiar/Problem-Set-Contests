#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int a, b, c, d;
    int x = 0, y;
    bool f = false;
    while(x<9)
    {
        x++;
        if(c1 - x > 9)
            continue;
        else
        {
            a = x;
            c = r1 - x;
            b = c1 - x;
            d = r2 - b;
            if((a+c==r1 && b+d==r2 && a+b==c1 && c+d==c2 && a+d==d1 && b+c==d2) && (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) && (a>=0 && a<=9) && (c>=0 && c<=9) && (b>=0 && b<=9) && (d>=0 && d<=9))
            {
                f = true;
                cout<<a<<" "<<c<<endl<<b<<" "<<d<<endl;
                break;
            }
        }
    }
    if(f==false)
        cout<<"-1"<<endl;
}
