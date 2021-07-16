#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int divisor = 5;
    int trailing_zeros = 0;
    while(divisor <= n)
    {
        trailing_zeros += n/divisor;
        divisor *= 5;
    }
    cout << trailing_zeros << '\n';
    return 0;
}