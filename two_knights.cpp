#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int baselines[5] = {0, 6, 28, 96, 252};
    int n;
    cin>> n;
    for(long long int i =0; i < n; i++)
    {
        if(i<5) cout << baselines[i] << '\n';
        else
        {
            cout << ((i+1)*(i+1))*((i+1)*(i+1) - 1)/2 - (4*(i-3)*(i-3) + 20*(i-3) + 24) << '\n';
        }
    }
    return 0;
}