#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        long long x,y;
        cin >> y >> x;
        if(x<=y)
        {
            if(y%2==0)
                // Travel right and up
                cout << y*y - x + 1 << '\n';
            else cout << y*y - 2*y + 1 + x << '\n';
        }
        else
        {
            if(x%2==0) cout << (x-1)*(x-1) + y << '\n';
            else cout << x*x + 1 - y << '\n';
        }
    }
    return 0;
}