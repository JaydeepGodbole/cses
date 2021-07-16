#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    int a, b;
    while(t--)
    {
        cin >> a >> b;
        if(a > 2*b || b > 2*a) cout << "NO" << '\n';
        else if((a+b)%3 == 0) cout << "YES" << '\n';
        else cout << "NO" << '\n'; 
    }
    return 0;
    
}