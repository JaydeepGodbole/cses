#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int result = 1;
    while(n--)
    {
        result = (result*2)%(1000000007);
    }
    cout << result;
    return 0;
}