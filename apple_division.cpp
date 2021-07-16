#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;

    int * v = new int[n];
    int x;
    long sum = 0;
    
    for(int i= 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
        sum += x;
    }

    long ans = 0;
    
    for(int i = 0; i < 1<<n; i++)
    {
        long cumulative = 0;
        for(int j = 0; j < n; j++)
        {
            if(i>>j & 1) 
            {
                cumulative += v[j];
                if(cumulative <= sum/2)
                {
                    ans = max(ans, cumulative);
                }
            }
        }
    }
    cout << sum - 2*ans;
    return 0;

}